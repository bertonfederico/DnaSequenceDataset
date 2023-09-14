#ifndef RUN_ALGORITHM_H
#define RUN_ALGORITHM_H

#include "common.h"
#include "algorithm_iterate.h"
#include "algorithm_massive.h"

using namespace std;

class RunAlgorithm
{
public:
    RunAlgorithm(inputValues input, vector<int> n_values, vector<int> k_values);
    void run();
    void checkOutputDicretoriesForAllVersions();
    void runAlgorithm();
    void openAndSetOutputFiles();
    void printToCsvFile();
    void closeOutputCsvFile();
    void checkOrCreateOutputDirectories(string tag);
    void clearVariables();
    void printOutputLogFile();
    void printWallCsv(vector<outputValues> lista, int k);
    void printCpuCsv(vector<outputValues> lista, int k);
    void printOutputLogFile(outputValues out, string dirTag, string fullOrPartial);
    void writeEmptyCellsInCsv(int number, ofstream &outFile);
    string getFormattedValue(double d);
    void prepareOutputCsvFile(ofstream &csvOut);
    void printRecordsCsv(vector<outputValues> lista, int k);
    void printWhileIterationsCsv(vector<parametersChangesObject>);
    string getStringMedia(int i1, int i2, int i3, int i4);
    void getMediaVector(vector<outputValues> lista1, vector<outputValues> lista2, vector<outputValues> lista3, vector<outputValues> lista4);
    void printResultToConsolle(outputValues out, string version);

    inputValues input;

    ofstream output_csv_wall;
    ofstream output_csv_CPU;
    ofstream output_csv_record_selected;
    ofstream output_csv_parameter_changes;

    map<int, vector<outputValues>> mapFullIterate;
    map<int, vector<outputValues>> mapPartialIterate;
    map<int, vector<outputValues>> mapFullMassive;
    map<int, vector<outputValues>> mapPartialMassive;

    int testFullIterate = 0;
    int testPartialIterate = 0;
    int testFullMassive = 0;
    int testPartialMassive = 0;

    outputValues out_full_iterate;
    outputValues out_partial_iterate;
    outputValues out_full_massive;
    outputValues out_partial_massive;

    vector<int> n_values;
    vector<int> k_values;

    vector<parametersChangesObject> parametersChangesVector;
};

#endif // RUN_ALGORITHM_H
