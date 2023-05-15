#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;

    while (getline(input, line))
	 {
        for (int i = 0; i < line.length(); i++) 
		{
            if (line[i] == '.' || line[i] == ',') 
			{
                output << line[i];
                if (i < line.length() - 1 && line[i + 1] != ' ')
				 {
                    output << ' ';
                }
            } else 
			{
                output << line[i];
            }
        }
        output << '\n';
    }

    input.close();
    output.close();

    return 0;
}
