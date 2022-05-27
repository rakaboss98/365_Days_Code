#include <iostream>
#include <string>

using namespace std;

// CPP classes
class Student{
private:
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    void set_age(int a){
        age = a;
    }
    void set_first_name(string a){
        first_name = a;
    }
    void set_last_name(string a){
        last_name = a;
    }
    void set_standard(int a){
        standard = a;
    }

    int get_age(){
        return age;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    int get_standard(){
        return standard;
    }
    string tostring(){
        string s1 = to_string(age);
        string s2 = to_string(standard);
        return s1 + "," + first_name + "," + last_name + "," + s2;

    }
};

// Struct - a composite data structure laying the foundation of OOPS

struct Student1{
    int age;
    string first_name;
    string last_name;
    int standard;
};

// working with C++ strings

int main() {
    string a = "hello";
    string b = ", world";
    cout << "the size of string is" << a.size() << endl;
    string c = a + b;
    cout << "the concatenated string is: " << c << endl;
    cout << "the second element of the string is: " << c[2] << endl;

    Student1 st1;

    // Input the parameters

    cin >> st1.age >> st1.first_name >> st1.last_name >> st1.standard;
    cout << st1.age << " " << st1.first_name << " " << st1.last_name << " " << st1.standard << endl;

    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.tostring();

    return 0;
}
