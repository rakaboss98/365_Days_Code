#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Examples of using vectors in C++
    vector<int> vector1 = {1,2,3,4,5}; // Initializer list
    vector<int> vector2 {1,2,3,4,5};  // Uniform Initialization
    vector<int> vector3(5,12);

    //Print the initialized vectors
    //ranged loop
    cout << "vector1 is: ";
    for(const int&i : vector1){
        cout << i << " ";
    }
    cout << endl << "vector2 is: ";
    for(const int&u : vector2){
        cout << u << " ";
    }
    // operations
    vector3.push_back(11); // this is like append in python
    cout << endl << "vector3 is: ";
    for(int i : vector3){
        cout << i << " ";
    }
    // access value at a specific location
    cout << "\nElement at index 0: " << vector3.at(5);
    cout << "\nElement at index 2: " << vector3[2] << endl; //at is preferred since [] gives garbage value \
    // when num is out of bound
    // delete a value using vector.pop() function

    // Print an array of variable input in reverse order
    int arr_len;
    cin >> arr_len;
    vector<int> array;
    for(int iter=0;iter<arr_len;iter++){
        int num;
        cin >> num;
        array.push_back(num);
    }

    int iter = arr_len-1;
    while(iter>=0){
        cout << array.at(iter) << " ";
        iter = iter-1;
    }
    

    return 0;
}
