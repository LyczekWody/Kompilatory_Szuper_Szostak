#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    string input;
    regex pattern("^10*$");

    cout << "Podaj ciag binarny: ";
    cin >> input;

    if (regex_match(input, pattern)) {
        cout << "Ciag " << input << " odpowiada potedze 2 w zapisie binarnym." << endl;
    } else {
        cout << "Ciag " << input << " nie odpowiada potedze 2 w zapisie binarnym." << endl;
    }

    return 0;
}
