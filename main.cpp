#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void coutVector1D(vector<string>& VectorCout) { // Ok.
    for(int a = 0; a < VectorCout.size(); a++) {
        cout << VectorCout[a] << endl;
        }
    }

void readVector1DFile(vector<string>& Vector1DFile, string file = "data.txt") {
    ifstream fichier(file.c_str(), ios::in);
    if(!fichier) {
        cerr << "Impossible to open the file!" << endl;
        }
    else {
        string line = "";
        while(getline(fichier, line)) {
            Vector1DFile.push_back(line);
            }
        fichier.close();
        }
    }

int main() {
    int N = 0;
    vector<string> Matrix(N, "0");
    readVector1DFile(Matrix, "Data.txt");
    coutVector1D(Matrix);
    cout << "Ok!" << endl;
    return 0;
    }
