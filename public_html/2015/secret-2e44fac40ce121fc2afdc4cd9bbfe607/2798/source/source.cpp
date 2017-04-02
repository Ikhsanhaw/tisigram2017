#include <iostream>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    string time;
    stringstream sstr;
    int hh, mm, ss;
    char ch, med[3];
    cin >> time;
    sstr.str(time);
    sstr >> hh >> ch >> mm >> ch >> ss >> med;
    if (strcmp(med,"PM") == 0 && hh != 12) {
        hh += 12;
    }
    if (strcmp(med,"AM") == 0 && hh == 12) {
        hh = 0;
    }
    cout << setfill('0') << setw(2);
    cout << hh << ':' 
        << setfill('0') << setw(2) << mm << ':' 
        << setfill('0') << setw(2) << ss << endl; 
    return 0;
}