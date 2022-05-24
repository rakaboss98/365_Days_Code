#include <vector>
#include <iostream>
#include <sstream>
using namespace std;


int main() {
    /* Creating a two-dimensional vector in C++ and accessing values from that */
    int n, q;
    cin >> n >> q;
    vector<vector<int>> main_arr;
    for(int i=0;i<n;i++){
        int len_i;
        vector<int> temp;
        cin >> len_i;
        for(int j=0;j<len_i;j++){
            int input;
            cin >> input;
            temp.push_back(input);
        }
        main_arr.push_back(temp);
    }

    for(int iter=0; iter<q; iter++){
        int index_i, index_j;
        cin >> index_i >> index_j;
        cout << main_arr[index_i][index_j]<<endl;
    }

    /* How to use string stream in C++ */
    string str(" Hello, I am Rakshit Bhatt");
    string temp;
    stringstream str_stream(str);
    vector<string> words;
    while (str_stream >> temp){
        words.push_back(temp);
    }
    for(int iter=0;iter<words.size(); iter++){
        cout << words[iter] << endl;
    }


    return 0;
}