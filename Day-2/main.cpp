#include <iostream>

using namespace std;

int max_of_four(int, int, int, int);
void sum_difference(int*, int*);

int main() {
    // Printing the number in text form if it's <=9 else printing it either as even or as odd

    int lower_bound, upper_bound;
    int iter;
    string names[] = {"", "one", "two", "three", "four",
                      "five", "six", "seven", "eight", "nine"};

    cin >> lower_bound >> upper_bound;

    for(iter=lower_bound;iter<=upper_bound;iter++){
        if(iter<=9){
            cout << names[iter] << endl;
        }
        else if(iter%2==0){
            cout << "even" << endl;
        }
        else{
            cout << "odd" << endl;
        }
    }

    // function to find the maximum of four numbers
    int max = max_of_four(1, 2, 5, 3);
    cout << "The max of four numbers is: " << max << endl;

    // function to add/subtract two numbers using pointers
    int a = 5, b=9;
    sum_difference(&a, &b);

    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int arr[] = {a, b, c, d};
    int max_val = 0;
    for(int iter=0;iter<4;iter++){
        if (arr[iter]>= max_val){
            max_val = arr[iter];
        }
    }

    return max_val;
}

void sum_difference(int* a, int*b){
    cout << "The sum is: " << *a+*b << endl;
    if (*a>*b){
        cout << "The absolute difference is: " << *a-*b << endl;
    }
    else{
        cout << "The absolute difference is: " << *b-*a << endl;
    }
}