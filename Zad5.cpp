#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <locale.h>
using namespace std;

int main() 
{
	setlocale(LC_CTYPE,"Polish");
    ifstream input("biblia.txt");
    map<string, int> ilosc;
    string slowo;

    while (input >> slowo) 
	{
        while (ispunct(slowo.back())) 
		{
            slowo.pop_back();
        }
        transform(slowo.begin(), slowo.end(), slowo.begin(), ::tolower);
        ilosc[slowo]++;
    }

    vector<pair<string, int>> iloscVector(ilosc.begin(), ilosc.end());

    sort(iloscVector.begin(), iloscVector.end(), [](const pair<string, int>& a, const pair<string, int>& b) 
	{
        return a.second > b.second;
    });

    for (int i = 0; i < min(10, (int)iloscVector.size()); i++) 
	{
        cout << iloscVector[i].first << " - " << iloscVector[i].second << " wyst¹pieñ" << endl;
    }

    input.close();

    return 0;
}
