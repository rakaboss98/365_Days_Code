#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

/* Given a string that is in the format "a1, a2, a3....."
 * print
 * a1
 * a2
 * a3  and so on */

vector<int> parseInts(string str) {
    // Complete this function
    int temp_int;
    char temp_char;
    int iter = 0;
    stringstream int_str(str);
    vector<int> int_vec;

    while (int_str>>temp_int){
        int_vec.push_back(temp_int);
        int_str >> temp_char;
    }

    return int_vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

