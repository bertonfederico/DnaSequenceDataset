#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "common.h"
#include "run_algorithm.h"

using namespace std;

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_run_button_clicked();
    void on_parameter_n_field_editingFinished();
    void on_parameter_k_field_editingFinished();
    void clearOutput();
    bool splitStringByComma(string stringToSplit, vector<int> &v);
    int getFileSize(string fileName);
    void setCsvFilesName();
    void connectSignals(RunAlgorithm *run);
    void updateTestsValue(bool isFull, bool isIterate, int value);
    void getMessageBox(string message, string title);
    void getMessageBox(string message);
    void on_select_input_clicked();

    void on_select_output_clicked();

private:
    Ui::MainWindow *ui;
    inputValues input;
    vector<int> n_values;
    vector<int> k_values;
};

#endif // MAINWINDOW_H
