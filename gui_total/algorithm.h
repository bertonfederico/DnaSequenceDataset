#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "common.h"

using namespace std;

class Algorithm
{
public:
    Algorithm(inputValues input, int version, string dirTag);
    virtual outputValues run() = 0;

protected:
    inputValues inputVal;
    outputValues outputVal;
    int version;
    string directTag;

    struct timespec begin_wall, begin_CPU, end_wall, end_CPU;

    ifstream input_file;
    ofstream output_file;

    void uniformSampling();
    void getRandomSet(vector<int> set, int max_num, int size);
    int findOccurrences(vector<int> *v, int element_to_find);
    int getBinomialDistribution(int a, double b);
    void startMeasuringTime();
    void stopMeasuringTime();
    virtual record getNextRecord(int index) = 0;
    virtual void addRecordToOutputFile(record r) = 0;
};

#endif // ALGORITHM_H
