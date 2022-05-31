#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student{
public:
    int scores[5] = {0, 0, 0 , 0, 0};

    void input(){
        for(int i=0;i<5;i++){
            cin >> scores[i];
        }
    }

    int calculateTotalScore(){
        int sum = 0;
        for(int i=0; i<5;i++){
            sum += scores[i];
        }
        return sum;
    }

};

// Operator overloading resources https://www.programiz.com/cpp-programming/operator-overloading

class Complex{

public:
    int real;
    int imag;

    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }

    Complex operator + (Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void print(){
        cout << real << "+ i" << imag;
    }

};

int main() {

/*    Using functions from classes */

    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

/* Operator Overloading */

    Complex C1(10,3);
    Complex C2(11,35);
    Complex C3 = C1+C2;
    C3.print();


    return 0;
}