#include "algorithm_iterate.h"

outputValues AlgorithmIterate::run() {
    startMeasuringTime();
    openInputOutputFiles();
    uniformSampling();
    closeInputOutputFiles();
    stopMeasuringTime();
    return outputVal;
}

void AlgorithmIterate::openInputOutputFiles() {
    input_file.open(inputVal.input_file_path);

    outputVal.outputFileName = (version == 0) ? getOutputFileName("full", inputVal) : getOutputFileName("partial", inputVal);
    string tagVersion = (version == 0) ? "FullVersion" : "PartialVersion";
    string outputFilePath = inputVal.output_file_dir + "\\" + directTag + "\\" + tagVersion + "\\OutputDataset\\" + outputVal.outputFileName;
    output_file.open(outputFilePath, ios::trunc);
}

record AlgorithmIterate::getNextRecord(int index) {
    string line;
    record my_record;
    if (version == 0) {
        getline (input_file, line);
        my_record.line1 = line;
        getline (input_file, line);
        my_record.line2 = line;
        getline (input_file, line);
        my_record.line3 = line;
        getline (input_file, line);
        my_record.line4 = line;
    } else {
        getline (input_file, line);
        getline (input_file, line);
		my_record.line2 = line;
        getline (input_file, line);
        getline (input_file, line);
    }
    return my_record;
}


void AlgorithmIterate::addRecordToOutputFile(record my_record) {
    if (version == 0) {
        output_file << my_record.line1 << endl;
        output_file << my_record.line2 << endl;
        output_file << my_record.line3 << endl;
        output_file << my_record.line4 << endl;
    } else {
        output_file << my_record.line2 << endl;
    }
}

void AlgorithmIterate::closeInputOutputFiles() {
    input_file.close();
    output_file.close();
}
