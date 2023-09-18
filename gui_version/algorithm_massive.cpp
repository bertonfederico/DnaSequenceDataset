#include "algorithm_massive.h"

outputValues AlgorithmMassive::run () {
    startMeasuringTime();
    getRecordList();
    uniformSampling();
    printOutputRecordListToFile();
    stopMeasuringTime();
    return outputVal;
}

void AlgorithmMassive::getRecordList() {
    string line;
    record my_record;
    ifstream input_file;
    input_file.open (inputVal.input_file_path);
    if (input_file.is_open()) {
        while (getline(input_file, line)) {
            if (version == 0) {
                my_record.line1 = line;
                getline (input_file, line);
                my_record.line2 = line;
                getline (input_file, line);
                my_record.line3 = line;
                getline (input_file, line);
                my_record.line4 = line;
            } else {
                getline (input_file, line);
                my_record.line2 = line;
                getline (input_file, line);
                getline (input_file, line);
            }
            input_record_list.push_back(my_record);
        }
        input_file.close();
    }
}

record AlgorithmMassive::getNextRecord(int index) {
    return input_record_list[index];
}

void AlgorithmMassive::addRecordToOutputFile(record my_record) {
    output_record_list.push_back(my_record);
}


void AlgorithmMassive::printOutputRecordListToFile() {
    ofstream output_file;
    outputVal.outputFileName = (version == 0) ? getOutputFileName("full", inputVal) : getOutputFileName("partial", inputVal);
    string tagVersion = (version == 0) ? "FullVersion" : "PartialVersion";
    string outputFilePath = inputVal.output_file_dir + "\\" + directTag + "\\" + tagVersion + "\\OutputDataset\\" + outputVal.outputFileName;
    output_file.open(outputFilePath, ios::trunc);
    if (output_file.is_open()) {
        for (record& my_record : output_record_list) {
            if (version == 0) {
                output_file << my_record.line1 << endl;
                output_file << my_record.line2 << endl;
                output_file << my_record.line3 << endl;
                output_file << my_record.line4 << endl;
            } else {
                output_file << my_record.line2 << endl;
            }
        }
    }
    output_file.close();
}
