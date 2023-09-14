#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->input_file_check->setVisible(false);
    ui->output_file_check->setVisible(false);
    ui->parameter_n_check->setVisible(false);
    ui->parameter_k_check->setVisible(false);
    ui->run_button->setStyleSheet("background-color: #919191; color : white");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_input_file_field_editingFinished()
{
    input.input_file_path = "";
    string inputValue = ui->input_file_field->text().toStdString();
    if (inputValue.empty()) {
        ui->input_file_check->setVisible(false);
    } else if (inputValue.compare(input.input_file_path) != 0) {
        const char *input_path = inputValue.c_str();
        int flag = access(input_path, F_OK);
        if (flag == -1) {
            ui->input_file_check->setVisible(false);
            ui->input_file_field->clear();
            getMessageBox("The inserted path is not a valid path; retry!");
            return;
        }
        struct stat sb;
        if(stat(input_path, &sb) == 0 && !S_ISREG(sb.st_mode)) {
            ui->input_file_check->setVisible(false);
            ui->input_file_field->clear();
            getMessageBox("The inserted path doesn't match with a regular file; retry!");
            return;
        }
        input.input_file_path = inputValue;
        ui->input_file_check->setVisible(true);
        input.input_dataset_size = getFileSize(inputValue);
        if (input.output_dataset_size != -1 && input.input_dataset_size < input.output_dataset_size) {
            ui->parameter_n_field->clear();
            input.output_dataset_size = -1;
        }
    }
}

void MainWindow::on_output_file_field_editingFinished()
{
    input.output_file_dir = "";
    string inputValue = ui->output_file_field->text().toStdString();
    if (inputValue.empty()) {
        ui->output_file_check->setVisible(false);
    } else if (!inputValue.empty() && inputValue.compare(input.output_file_dir) != 0) {
        const char *output_path = inputValue.c_str();
        int flag = access(output_path, F_OK);
        struct stat sb;
        if (flag == -1) {
            ui->output_file_check->setVisible(false);
            ui->output_file_field->clear();
            getMessageBox("The inserted path is not a valid path; retry!");
            return;
        }
        if(flag == 0 && stat(output_path, &sb) == 0 && !S_ISDIR(sb.st_mode)) {
            ui->output_file_check->setVisible(false);
            ui->output_file_field->clear();
            getMessageBox("The inserted path doesn't match with a directory; retry!");
            return;
        }
        input.output_file_dir = inputValue;
        ui->output_file_check->setVisible(true);
    }
}

void MainWindow::on_parameter_n_field_editingFinished()
{
    n_values.clear();
    input.output_dataset_size = -1;
    string inputValue = ui->parameter_n_field->text().toStdString();
    if (inputValue.empty()) {
        ui->parameter_n_check->setVisible(false);
    } else if (!inputValue.empty() && inputValue.compare(to_string(input.output_dataset_size)) != 0) {
        if (!splitStringByComma(inputValue, n_values)) {
            ui->parameter_n_check->setVisible(false);
            ui->parameter_n_field->clear();
            return;
        }
        ui->parameter_n_check->setVisible(true);
    }
}

void MainWindow::on_parameter_k_field_editingFinished()
{
    k_values.clear();
    input.parameter_k = -1;
    string inputValue = ui->parameter_k_field->text().toStdString();
    if (inputValue.empty()) {
        ui->parameter_k_check->setVisible(false);
    } else if (!inputValue.empty() && inputValue.compare(to_string(input.parameter_k)) != 0) {
        if (!splitStringByComma(inputValue, k_values)) {
            ui->parameter_k_check->setVisible(false);
            ui->parameter_k_field->clear();
            return;
        }
        ui->parameter_k_check->setVisible(true);
    }
}

int MainWindow::getFileSize(string filename) {
    string line;
    ifstream input_file;
    input_file.open (filename);
    int length = 0;
    while (getline(input_file, line)) {
        length++;
    }
    input_file.close();
    return length/4;
}

void MainWindow::on_run_button_clicked()
{
    clearOutput();
    if (input.input_file_path.empty()) {
        getMessageBox("Insert the desired input-file path!");
        return;
    }
    if (input.output_file_dir.empty()) {
        getMessageBox("Insert the desired output-file directory!");
        return;
    }
    if (n_values.empty()) {
        getMessageBox("Insert the desired sample size (parameter n)!");
        return;
    }
    if (k_values.empty()) {
        getMessageBox("Insert the desired parameter k!");
        return;
    }
    QApplication :: setOverrideCursor (Qt::BusyCursor);
    setCsvFilesName();
    RunAlgorithm *run = new RunAlgorithm(input, n_values, k_values);
    connectSignals(run);
    run->run();
    QApplication :: restoreOverrideCursor();
    getMessageBox("Process completed successfully", "Success!");
}

void MainWindow::clearOutput() {
    ui->csv_name_partial->clear();
    ui->csv_name_wall->clear();
    ui->csv_name_p_changes->clear();
    ui->csv_name_r_selected->clear();

    ui->test_f_it->clear();
    ui->test_f_m->clear();
    ui->test_p_it->clear();
    ui->test_p_m->clear();
    ui->test_tot->clear();
}

bool MainWindow::splitStringByComma(string stringToSplit, vector<int> &v) {
    if (!regex_match(stringToSplit, regex("([1-9]+[0-9]*[;](\\s)*)*([1-9]+[0-9]*[;]?(\\s)*)?"))) {
        getMessageBox("The inserted values are not in correct format; retry!");
        return false;
    }
    string delimiter = ";";
    int start = 0;
    int end = stringToSplit.find(delimiter);
    while (end != -1) {
        int t = stoi(stringToSplit.substr(start, end - start));
        if (t > input.input_dataset_size || t < 1) {
            getMessageBox("The parameter must be between 1 and input-dataset size; retry");
            return false;
        }
        start = end + delimiter.size();
        end = stringToSplit.find(delimiter, start);
        v.push_back(t);
    }
    if (!stringToSplit.substr(start, end - start).empty()) {
        int t = stoi(stringToSplit.substr(start, end - start));
        if (t > input.input_dataset_size || t < 1) {
            getMessageBox("The parameter must be between 1 and input-dataset size; retry");
            return false;
        }
        v.push_back(t);
    }
    return true;
}

void MainWindow::updateTestsValue(bool isFull, bool isIterate, int value) {
    if (isFull && isIterate) {
        ui->test_f_it->setText(QString::fromStdString(to_string(value)));
    } else if (isFull && !isIterate) {
        ui->test_f_m->setText(QString::fromStdString(to_string(value)));
    } else if (!isFull && isIterate) {
        ui->test_p_it->setText(QString::fromStdString(to_string(value)));
    } else if (!isFull && !isIterate) {
        ui->test_p_m->setText(QString::fromStdString(to_string(value)));
    }
    int tot_test = (ui->test_tot->text().isEmpty()) ? 0 : stoi((ui->test_tot->text()).toStdString());
    ui->test_tot->setText(QString::fromStdString(to_string(tot_test + 1)));
    qApp->processEvents();
}

void MainWindow::setCsvFilesName() {
    ui->csv_name_wall->setText(QString::fromStdString("executionTimesWall.csv"));
    ui->csv_name_partial->setText(QString::fromStdString("executionTimesCPU.csv"));
    ui->csv_name_r_selected->setText(QString::fromStdString("inputRecordSelected.csv"));
    ui->csv_name_p_changes->setText(QString::fromStdString( "parametersChanges.csv"));
    qApp->processEvents();
}

void MainWindow::connectSignals(RunAlgorithm *run) {
    ui->progressBar->setRange(0, n_values.size()*k_values.size()*4);
    connect(run, SIGNAL(testValueChanged(bool, bool, int)), this, SLOT(updateTestsValue(bool, bool, int)));
    connect(run, SIGNAL(progressBarValueChanged(int)), ui->progressBar, SLOT(setValue(int)));
}

void MainWindow::getMessageBox(string message, string title) {
    QMessageBox msgBox;
    msgBox.setWindowTitle(title.c_str());
    string text = "<p align='center'>" + title + "!</p>";
    msgBox.setText(text.c_str());
    message = "<p align='center'>" + message + "</p>";
    msgBox.setInformativeText(message.c_str());
    msgBox.setFont(QFont ("MS Shell Dlg 2", 11));
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.setStyleSheet("QLabel{min-width:400 px;}");
    msgBox.button(QMessageBox::Ok)->setStyleSheet("background-color: #919191; color : white");
    msgBox.exec();
}

void MainWindow::getMessageBox(string message) {
    getMessageBox(message, "Warning!");
}
