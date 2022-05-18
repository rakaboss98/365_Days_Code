#include <iostream>

using namespace std;

int main() {
    
    int var1, var2, var3;
    cin >> var1 >> var2 >> var3;
    cout << "Printing the sum of the three variables: ";
    cout << var1+var2+var3 << endl;
    string str1;
    string str2;

    cin >> str1 >> str2; // Can use the string to temporarily store variable data types

    cout << "String is able to store a lot of data formats like: " << str1 << " and " << str2;

    return 0;
}
