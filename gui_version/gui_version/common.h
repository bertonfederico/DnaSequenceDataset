#ifndef COMMON_H
#define COMMON_H

#include <string>
#include <qmessagebox.h>
#include <QAbstractButton>
#include <time.h>
#include <cmath>
#include <ctgmath>
#include <QMainWindow>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <ctgmath>
#include <QDir>
#include <regex>
#include <QObject>
#include <vector>
#include <random>

using namespace std;

struct inputValues {
    string input_file_path = "";
    string output_file_dir = "";
    int output_dataset_size = -1;
    int input_dataset_size = -1;
    int parameter_k = -1;

};

struct outputValues {
    int k_in;
    int n_in;
    int written;
    double elapsed_wall;
    double elapsed_CPU;
    string outputFileName;
    int inputRecordSelected = 0;
    vector<int> n_decrease;
    vector<int> m_decrease;
    vector<int> c_values;
    vector<int> duplicated_records;
    int whileiterations = 0;
};

struct parametersChangesObject {
    string n;
    string k;
    int whileIterations;
    vector<string> n_dec;
    vector<string> m_dec;
    vector<string> c_val;
    vector<string> duplicated;
};

struct record {
    string line1;
    string line2;
    string line3;
    string line4;
};

struct parameterSettingStatus {
    int toStart = 0;
    int setted_1 = 1;
    int setted_2 = 2;
    int setted_3 = 3;
    int setted_4 = 4;
};

inline string getOutputFileName(string toAppend, inputValues input) {
    string fileName;
    time_t t = time(0);
    struct tm * now = localtime(& t );
    fileName =  "outData_" + toAppend + "_" +
               "n" + to_string(input.output_dataset_size) + "_" +
               "k" + to_string(input.parameter_k) + "_" +
               to_string(now->tm_year + 1900) +
               to_string(now->tm_mon + 1) +
               to_string(now->tm_mday) +
               to_string(now->tm_hour) +
               to_string(now->tm_min) +
               to_string(now->tm_sec) +
               ".fastq";
    return fileName;
}

inline string getOutputFileLogName(string tag, inputValues input) {
    string fileName;
    time_t t = time(0);
    struct tm * now = localtime(& t );
    fileName =  "logExecutionTimes" + tag + "_" +
               "n" + to_string(input.output_dataset_size) + "_" +
               "k" + to_string(input.parameter_k) + "_" +
               to_string(now->tm_year + 1900) +
               to_string(now->tm_mon + 1) +
               to_string(now->tm_mday) +
               to_string(now->tm_hour) +
               to_string(now->tm_min) +
               to_string(now->tm_sec) +
               ".log";
    return fileName;
}

#endif // COMMON_H
