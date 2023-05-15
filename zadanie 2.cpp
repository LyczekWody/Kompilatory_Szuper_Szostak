#include <iostream>
#include <regex>

using namespace std;

bool IpCheck(const string& ipAddress){
    regex ipRegex("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
    return regex_match(ipAddress, ipRegex);
}

int main(){
    string ipAddress;
    cout << "Podaj adres IP: ";
    cin >> ipAddress;
    if (IpCheck(ipAddress)){
        cout << "Adres IP jest poprawny." << endl;
    }
    else{
        cout << "Adres IP jest niepoprawny." << endl;
    }
    return 0;
}
