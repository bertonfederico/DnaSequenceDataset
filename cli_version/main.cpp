#include "common.h"
#include "run_algorithm.h"

using namespace std;

void printAlgorithmDescription();
void setInputParameters();
void inputFilePath();
void outputFilePath();
void parameterN();
void parameterK();
string splitStringByComma(string stringToSplit, vector<int> &v);
int getFileSize(string fileName);

inputValues input;
vector<int> n_values;
vector<int> k_values;

int main () {
    printAlgorithmDescription();
    setInputParameters();
    RunAlgorithm *run = new RunAlgorithm(input, n_values, k_values);
    run->run();
    printf("\nProcess completed successfully\n");
    system("pause");
    printf("\nApplication stopped.\n");
    return 0;
}

void printAlgorithmDescription() {
    printf("Input:\n");
    printf("  - dataset D  with |D | = m  reads of 4 lines (only 3^ is significant)\n");
    printf("  - sample size n\n");
    printf("  - parameter k  ∈ [1, m]\n");

    printf("Output:\n");
    printf("  - file with n  reads of D  chosen at random uniformly with replacement\n");
    printf("  - log file with execution times\n");

    printf("Version:\n");
    printf("  - Full :  in the output dataset are written all four lines\n");
    printf("  - Partial :  in the output dataset is written only significant line\n");
}

void setInputParameters() {
    inputFilePath();
    input.input_dataset_size = getFileSize(input.input_file_path);
    outputFilePath();
    parameterN();
    parameterK();
}

void inputFilePath() {
    bool b = true;
    while (b) {
        printf("\nInsert the desired input-file path:\n");
        cin >> input.input_file_path;
        const char *input_path = input.input_file_path.c_str();
        int flag = access(input_path, 00);
        if (flag == -1) {
            printf("The inserted path is not a valid path; retry!\n");
            cin.clear();
            continue;
        }
        struct stat sb;
        if(stat(input_path, &sb) == 0 && !(((sb.st_mode) & 0xF000) == 0x8000)) {
            printf("The inserted path doesn't match with a regular file; retry!\n");
            cin.clear();
            continue;
        }
        b = false;
        cin.clear();
    }
}

void outputFilePath() {
    bool b = true;
    while (b) {
        printf("\nInsert the desired output-file path\n");
        string out;
        cin >> input.output_file_dir;
        const char *output_path = input.output_file_dir.c_str();
        int flag = access(output_path, 00);
        struct stat sb;
        if (flag == -1) {
            printf("The inserted path is not a valid path; retry!");
            cin.clear();
            continue;
        }
        if(flag == 0 && stat(output_path, &sb) == 0 && !(((sb.st_mode) & 0xF000) == 0x4000)) {
            printf("The inserted path doesn't match with a directory; retry!");
            cin.clear();
            continue;
        }
        b = false;
        cin.clear();
    }
}

void parameterN() {
    bool b = true;
    while (b) {
        printf("\nInsert the desired parameters n (separated by semicolon):\n");
        string tmp;
        cin >> tmp;
        string error = splitStringByComma(tmp, n_values);
        if (!error.empty()) {
            printf(error.c_str());
            cin.clear();
            continue;
        }
        b = false;
        cin.clear();
    }
}

void parameterK() {
    bool b = true;
    while (b) {
        printf("\nInsert the desired parameters k (separated by semicolon):\n");
        string tmp;
        cin >> tmp;
        string error = splitStringByComma(tmp, k_values);
        if (!error.empty()) {
            printf(error.c_str());
            cin.clear();
            continue;
        }
        b = false;
        cin.clear();
    }
}

int getFileSize(string filename) {
    string line;
    ifstream input_file;
    input_file.open (filename);
    int length = 0;
    while (getline(input_file, line)) {
        length++;
    }
    input_file.close();
    return length/4;
}

string splitStringByComma(string stringToSplit, vector<int> &v) {
    if (!regex_match(stringToSplit, regex("([1-9]+[0-9]*[;](\\s)*)*([1-9]+[0-9]*[;]?(\\s)*)?"))) {
        return "The inserted values are not in correct format; retry!";
    }
    string delimiter = ";";
    int start = 0;
    int end = stringToSplit.find(delimiter);
    while (end != -1) {
        int t = stoi(stringToSplit.substr(start, end - start));
        if (t > input.input_dataset_size || t < 1) {
            return "The parameter must be between 1 and input-dataset size; retry";
        }
        start = end + delimiter.size();
        end = stringToSplit.find(delimiter, start);
        v.push_back(t);
    }
    if (!stringToSplit.substr(start, end - start).empty()) {
        int t = stoi(stringToSplit.substr(start, end - start));
        if (t > input.input_dataset_size || t < 1) {
            return "The parameter must be between 1 and input-dataset size; retry";
        }
        v.push_back(t);
    }
    return "";
}
