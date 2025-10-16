#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void setperson(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
private:
    int roll_number;

public:
    void setstudent(string n, int a, int r) {
        setperson(n,a);       
        roll_number = r;
    }

    void showdetails() {
        display();             
        cout<<"Roll Number: "<<roll_number<<endl;
    }
};

int main() {
    Student s;
    s.setstudent("Alice", 20, 101);
    s.showdetails();

}
