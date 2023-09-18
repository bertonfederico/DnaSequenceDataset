#include "algorithm.h"

Algorithm::Algorithm(inputValues input, int version, string dirTag)
{
    this->version = version;
    inputVal = input;
    directTag = dirTag;
    outputVal.k_in = inputVal.parameter_k;
    outputVal.n_in = inputVal.output_dataset_size;
}

void Algorithm::startMeasuringTime() {
    clock_gettime(CLOCK_REALTIME, &begin_wall);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin_CPU);
}

void Algorithm::uniformSampling() {
    int input_dataset_index = 0;
    int n = inputVal.output_dataset_size;
    int m = inputVal.input_dataset_size;
    int k = inputVal.parameter_k;
    outputVal.written = 0;
    while (n > 0) {
        outputVal.n_decrease.push_back(n);
        outputVal.m_decrease.push_back(m);
        outputVal.whileiterations++;
        k = (k < m) ? k : m;
        int c = getBinomialDistribution(n, k/((double)m));
        outputVal.c_values.push_back(c);
        std::vector<int> S;
        for (int i = 0; i < c; i++) {
            S.push_back(rand()%k+1);
        }
        int dupl_rec = 0;
        for (int j = 1; j <= k; j++) {
            record r = getNextRecord(input_dataset_index);
            outputVal.inputRecordSelected++;
            int r_c = findOccurrences(&S, j);
            dupl_rec += (r_c > 1) ? (r_c - 1) : 0;
            for (int z = 0; z < r_c; z++) {
                addRecordToOutputFile(r);
                outputVal.written++;
            }
            input_dataset_index++;
        }
        outputVal.duplicated_records.push_back(dupl_rec);
        n = n - c;
        m = m - k;
    }
    outputVal.inputRecordSelected = input_dataset_index;
    outputVal.n_decrease.push_back(n);
    outputVal.m_decrease.push_back(m);
}

void Algorithm::stopMeasuringTime() {
    clock_gettime(CLOCK_REALTIME, &end_wall);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end_CPU);
    long second_wall = end_wall.tv_sec - begin_wall.tv_sec;
    long nanosec_wall = end_wall.tv_nsec - begin_wall.tv_nsec;
    outputVal.elapsed_wall = second_wall + nanosec_wall*1e-9;
    long second_CPU = end_CPU.tv_sec - begin_CPU.tv_sec;
    long nanosec_CPU = end_CPU.tv_nsec - begin_CPU.tv_nsec;
    outputVal.elapsed_CPU = second_CPU + nanosec_CPU*1e-9;
}

int Algorithm::getBinomialDistribution(int a, double b) {
    std::default_random_engine generator;
    b = (b < 1) ? b : 1;
    std::binomial_distribution<int> distribution(a, b);
    return distribution(generator);
}

void Algorithm::getRandomSet(std::vector<int> set, int max_num, int size) {
    for (int i = 0; i < size; i++) {
        set.push_back(rand()%max_num+1);
    }
}

int Algorithm::findOccurrences(vector<int> *set, int element_to_find) {
    int count = 0;
    auto it = std::begin(*set);
    while (it != std::end(*set)) {
        if (*it == element_to_find) {
            count++;
            it = set->erase(it);
        } else {
            it++;
        }
    }
    return count;
}
