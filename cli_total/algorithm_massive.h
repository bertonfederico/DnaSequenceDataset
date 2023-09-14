#ifndef ALGORITHM_MASSIVE_H
#define ALGORITHM_MASSIVE_H

#include "algorithm.h"

using namespace std;

class AlgorithmMassive : public Algorithm {
public:
    AlgorithmMassive(inputValues input, int version, string dirTag) : Algorithm(input, version, dirTag) {}
    using Algorithm::run;
    using Algorithm::getNextRecord;
    using Algorithm::addRecordToOutputFile;
    virtual outputValues run() override;

protected:
    void getRecordList();
    virtual record getNextRecord(int index) override;
    virtual void addRecordToOutputFile(record my_record) override;
    void printOutputRecordListToFile();

    vector<record> output_record_list;
    vector<record> input_record_list;
};

#endif // ALGORITHM_MASSIVE_H
