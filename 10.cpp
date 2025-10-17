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
    int rollnumber;

public:
    void setstudent(string n, int a, int r) {
        setperson(n,a);       
        rollnumber = r;
    }

    void showdetails() {
        display();             
        cout<<"Roll Number: "<<rollnumber<<endl;
    }
};

int main() {
    Student s;
    string name;
    int age,rollnumber;
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter age"<<endl;
    cin>>age;
    cout<<"enter roll number"<<endl;
    cin>>rollnumber;
    s.setstudent(name, age, rollnumber);
    s.showdetails();

}
