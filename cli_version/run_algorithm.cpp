#include "run_algorithm.h"
#include "algorithm_iterate.h"
#include "algorithm_massive.h"
#include <unistd.h>

RunAlgorithm::RunAlgorithm(inputValues input, vector<int> n_values, vector<int> k_values)
{
    this->input = input;
    this->n_values = n_values;
    this->k_values = k_values;
}

void RunAlgorithm::run()
{
    checkOutputDicretoriesForAllVersions();
    runAlgorithm();
    openAndSetOutputFiles();
    printToCsvFile();
    closeOutputCsvFile();
}

void RunAlgorithm::checkOutputDicretoriesForAllVersions() {
    checkOrCreateOutputDirectories("Iterate");
    checkOrCreateOutputDirectories("Iterate\\FullVersion");
    checkOrCreateOutputDirectories("Iterate\\FullVersion\\Logs");
    checkOrCreateOutputDirectories("Iterate\\FullVersion\\OutputDataset");
    checkOrCreateOutputDirectories("Iterate\\PartialVersion");
    checkOrCreateOutputDirectories("Iterate\\PartialVersion\\Logs");
    checkOrCreateOutputDirectories("Iterate\\PartialVersion\\OutputDataset");
    checkOrCreateOutputDirectories("Massive");
    checkOrCreateOutputDirectories("Massive\\FullVersion");
    checkOrCreateOutputDirectories("Massive\\FullVersion\\Logs");
    checkOrCreateOutputDirectories("Massive\\FullVersion\\OutputDataset");
    checkOrCreateOutputDirectories("Massive\\PartialVersion");
    checkOrCreateOutputDirectories("Massive\\PartialVersion\\Logs");
    checkOrCreateOutputDirectories("Massive\\PartialVersion\\OutputDataset");
}

void RunAlgorithm::checkOrCreateOutputDirectories(string tag) {
    string output_path_str = input.output_file_dir + "\\" + tag;
    const char *output_path = output_path_str.c_str();
    int flag = access(output_path, 00);
    struct stat sb;
    if (flag == -1 || (stat(output_path, &sb) == 0 && !(((sb.st_mode) & 0xF000) == 0x4000))) {
        mkdir(output_path);
    }
}

void RunAlgorithm::runAlgorithm() {
    for (int k : k_values) {
        for (int n : n_values) {
            input.parameter_k = k;
            input.output_dataset_size = n;
            AlgorithmIterate *fullIterate = new AlgorithmIterate(input, 0, "Iterate");
            AlgorithmIterate *partialIterate = new AlgorithmIterate(input, 1, "Iterate");
            AlgorithmMassive *fullMassive = new AlgorithmMassive(input, 0, "Massive");
            AlgorithmMassive *partialMassive = new AlgorithmMassive(input, 1, "Massive");
            out_full_iterate = fullIterate->run();
            printResultToConsolle(out_full_iterate, "Full iterate");
            printOutputLogFile(out_full_iterate, "Iterate", "FullVersion");
            mapFullIterate[k].push_back(out_full_iterate);
            out_partial_iterate = partialIterate->run();
            printResultToConsolle(out_partial_iterate, "Partial iterate");
            printOutputLogFile(out_partial_iterate, "Iterate", "PartialVersion");
            mapPartialIterate[k].push_back(out_partial_iterate);
            out_full_massive = fullMassive->run();
            printResultToConsolle(out_full_massive, "Full massive");
            printOutputLogFile(out_full_massive, "Massive", "FullVersion");
            mapFullMassive[k].push_back(out_full_massive);
            out_partial_massive = partialMassive->run();
            printResultToConsolle(out_partial_massive, "Partial massive");
            printOutputLogFile(out_partial_massive, "Massive", "PartialVersion");
            mapPartialMassive[k].push_back(out_partial_massive);
        }
    }
}

void RunAlgorithm::printOutputLogFile(outputValues out, string dirTag, string fullOrPartial) {
    ofstream output_log;
    string outputFileNameLog = getOutputFileLogName(fullOrPartial, input);
    string outputFilePath = input.output_file_dir + "\\" + dirTag + "\\" + fullOrPartial + "\\Logs\\" + outputFileNameLog;
    output_log.open(outputFilePath, ios::trunc);
    if (output_log.is_open()) {
        output_log << "------------  Outcome log - " + fullOrPartial + " " + dirTag + "--------------" << endl;
        output_log << "Input dataset path: "  + input.input_file_path << endl;
        output_log << "Parameter k: "  + to_string(input.parameter_k) << endl;
        output_log << "Parameter n: "  + to_string(input.output_dataset_size) << endl;
        output_log << "Output dataset name: "  + out.outputFileName << endl;
        output_log << "Written records to output-dataset: "  + to_string(out.written) << endl;
        output_log << "Wall time spended by the algorithm: "  + to_string(out.elapsed_wall) + " seconds" << endl;
        output_log << "CPU time spended by the algorithm: "  + to_string(out.elapsed_CPU) + " seconds" << endl;
        output_log << endl;
    }
}

void RunAlgorithm::printResultToConsolle(outputValues out, string version) {
    string title = "\n------------  Outcome log - " + version + " version   --------------\n";
    printf("%s", title.c_str());
    printf("Input dataset path: %s\n", input.input_file_path.c_str());
    printf("Parameter k: %d\n", input.parameter_k);
    printf("Parameter n: %d\n", input.output_dataset_size);
    printf("Output dataset name: %s\n", out.outputFileName.c_str());
    printf("Written records to output-dataset: %d\n", out.written);
    printf("Wall time spended by the algorithm: %.3f seconds\n", out.elapsed_wall);
    printf("CPU time spended by the algorithm: %.3f seconds\n\n", out.elapsed_CPU);
}

void RunAlgorithm::openAndSetOutputFiles() {
    string outputFilePathWall = input.output_file_dir + "\\executionTimesWall.csv";
    string outputFilePathCPU = input.output_file_dir + "\\executionTimesCPU.csv";
    string outputFilePathRecord = input.output_file_dir + "\\inputRecordSelected.csv";
    string outputFilePathParametersChanges = input.output_file_dir + "\\parametersChanges.csv";
    output_csv_wall.open(outputFilePathWall, ios::trunc);
    output_csv_CPU.open(outputFilePathCPU, ios::trunc);
    output_csv_record_selected.open(outputFilePathRecord, ios::trunc);
    output_csv_parameter_changes.open(outputFilePathParametersChanges, ios::trunc);
    prepareOutputCsvFile(output_csv_wall);
    prepareOutputCsvFile(output_csv_CPU);
    prepareOutputCsvFile(output_csv_record_selected);
}

void RunAlgorithm::prepareOutputCsvFile(ofstream &csvOut) {
    csvOut << "Iterate Full Version;";
    writeEmptyCellsInCsv(n_values.size(), csvOut);
    csvOut << "Iterate Partial Version;";
    writeEmptyCellsInCsv(n_values.size(), csvOut);
    csvOut << "Massive Full Version;";
    writeEmptyCellsInCsv(n_values.size(), csvOut);
    csvOut << "Massive Partial Version;";
    writeEmptyCellsInCsv(n_values.size(), csvOut);
    csvOut << endl;
    for (int i = 0; i < 4; i++) {
        csvOut << " ;";
        for (int n : n_values) {
            csvOut << "n = " + std::to_string(n) + ";";
        }
        csvOut << " ;";
    }
    csvOut << endl;
}

void RunAlgorithm::writeEmptyCellsInCsv(int number, ofstream &outFile) {
    for (int i = 0; i <= number; i++) {
        outFile << " ;";
    }
}

void RunAlgorithm::printToCsvFile() {
    for (int k : k_values) {
        printWallCsv(mapFullIterate[k], k);
        printWallCsv(mapPartialIterate[k], k);
        printWallCsv(mapFullMassive[k], k);
        printWallCsv(mapPartialMassive[k], k);
        printCpuCsv(mapFullIterate[k], k);
        printCpuCsv(mapPartialIterate[k], k);
        printCpuCsv(mapFullMassive[k], k);
        printCpuCsv(mapPartialMassive[k], k);
        printRecordsCsv(mapFullIterate[k], k);
        printRecordsCsv(mapPartialIterate[k], k);
        printRecordsCsv(mapFullMassive[k], k);
        printRecordsCsv(mapPartialMassive[k], k);
        getMediaVector(mapFullIterate[k], mapPartialIterate[k], mapFullMassive[k], mapPartialMassive[k]);
        output_csv_wall << endl;
        output_csv_CPU << endl;
        output_csv_record_selected << endl;
    }
    printWhileIterationsCsv(parametersChangesVector);
}

void RunAlgorithm::printWallCsv(vector<outputValues> lista, int k) {
    output_csv_wall << "k = " + std::to_string(k) + ";";
    for (const outputValues &out : lista) {
        output_csv_wall << getFormattedValue(out.elapsed_wall) + ";";
    }
    output_csv_wall << " ;";
}

void RunAlgorithm::printCpuCsv(vector<outputValues> lista, int k) {
    output_csv_CPU << "k = " + std::to_string(k) + ";";
    for (const outputValues &out : lista) {
        output_csv_CPU << getFormattedValue(out.elapsed_CPU) + ";";
    }
    output_csv_CPU << " ;";
}

string RunAlgorithm::getFormattedValue(double d) {
    string s = std::to_string(d);
    s.replace(s.find("."), 1, ",");
    return s;
}

void RunAlgorithm::getMediaVector(vector<outputValues> lista1, vector<outputValues> lista2, vector<outputValues> lista3, vector<outputValues> lista4) {
    for (int p = 0; p < (int) lista1.size(); p++) {
        parametersChangesObject d;
        d.k = std::to_string(lista1[p].k_in);
        d.n = std::to_string(lista1[p].n_in);
        for (int i = 1; i <= lista1[p].whileiterations; i++) {
            d.m_dec.push_back(getStringMedia(lista1[p].m_decrease[i-1], lista2[p].m_decrease[i-1], lista3[p].m_decrease[i-1], lista4[p].m_decrease[i-1]));
            d.n_dec.push_back(getStringMedia(lista1[p].n_decrease[i-1], lista2[p].n_decrease[i-1], lista3[p].n_decrease[i-1], lista4[p].n_decrease[i-1]));
            d.c_val.push_back(getStringMedia(lista1[p].c_values[i-1], lista2[p].c_values[i-1], lista3[p].c_values[i-1], lista4[p].c_values[i-1]));
            d.duplicated.push_back(getStringMedia(lista1[p].duplicated_records[i-1], lista2[p].duplicated_records[i-1], lista3[p].duplicated_records[i-1], lista4[p].duplicated_records[i-1]));
        }
        parametersChangesVector.push_back(d);
    }
}

string RunAlgorithm::getStringMedia(int i1, int i2, int i3, int i4) {
    return std::to_string((int)((i1 + i2 + i3 + i4)/4));
}

void RunAlgorithm::printRecordsCsv(vector<outputValues> lista, int k) {
    output_csv_record_selected << "k = " + std::to_string(k) + ";";
    for (const outputValues &out : lista) {
        output_csv_record_selected << std::to_string(out.inputRecordSelected) + ";";
    }
    output_csv_record_selected << " ;";
}

void RunAlgorithm::printWhileIterationsCsv(vector<parametersChangesObject> v) {
    for (const parametersChangesObject &obj : v) {
        output_csv_parameter_changes << "n = " + obj.n + ", k = " + obj.k + "; ; ; ; ; ;";
    }
    output_csv_parameter_changes << endl;
    for (int i = 0; i < (int) v.size(); i++) {
        output_csv_parameter_changes << "Iterations:;";
        output_csv_parameter_changes << "m decrease:;";
        output_csv_parameter_changes << "n decrease:;";
        output_csv_parameter_changes << "c values:;";
        output_csv_parameter_changes << "Duplicated records:;";
        output_csv_parameter_changes << " ;";
    }
    output_csv_parameter_changes << endl;
    for (int i = 1; i <= input.input_dataset_size; i++) {
        for (const parametersChangesObject &obj : v) {
            if (i <= (int) obj.m_dec.size() && i <= (int) obj.n_dec.size()) {
                output_csv_parameter_changes << std::to_string(i) + ";";
                output_csv_parameter_changes << obj.m_dec[i-1] + ";";
                output_csv_parameter_changes << obj.n_dec[i-1] + ";";
                output_csv_parameter_changes << obj.c_val[i-1] + ";";
                output_csv_parameter_changes << obj.duplicated[i-1] + ";;";
            }
        }
        output_csv_parameter_changes << endl;
    }
}

void RunAlgorithm::closeOutputCsvFile() {
    output_csv_wall.close();
    output_csv_CPU.close();
    output_csv_record_selected.close();
    output_csv_parameter_changes.close();
}
