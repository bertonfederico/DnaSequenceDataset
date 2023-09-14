#ifndef ALGORITHM_ITERATE_H
#define ALGORITHM_ITERATE_H

#include "algorithm.h"

using namespace std;

class AlgorithmIterate : public Algorithm {
public:
    AlgorithmIterate(inputValues input, int version, string dirTag) : Algorithm(input, version, dirTag) {}
    using Algorithm::run;
    using Algorithm::getNextRecord;
    using Algorithm::addRecordToOutputFile;
    virtual outputValues run() override;

protected:
    void openInputOutputFiles();
    virtual record getNextRecord(int index) override;
    virtual void addRecordToOutputFile(record my_record) override;
    void closeInputOutputFiles();
};

#endif // ALGORITHM_ITERATE_H
