#include <iostream> 
#include <fstream>

using namespace std;

int main(){
    ifstream input("plik.txt");
    string linia;
    int nrLinii = 1;

    while (getline(input, linia)){
        cout << nrLinii << ": " << line << "\n";
        nrLinii++;
    }

    input.close();
}
