#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollno;
    string course;

public:
    void setStudent(string n, int r, string c) {
        name = n;
        rollno = r;
        course = c;
    }
};

class Test : virtual public Student {
protected:
    int marks1, marks2, marks3;

public:
    void setMarks(int m1, int m2, int m3) {
      marks1 = m1;
         marks2 = m2;
        marks3 = m3;
    }
};

class GraceMarks : virtual public Student {
protected:
    int bonusMark;

public:
    void setBonus(int b) {
        bonusMark = b;
    }
};

class Result : public Test, public GraceMarks {
public:
    void displayResult() {
        int total = marks1 + marks2 + marks3 + bonusMark;
         cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
         cout<<"Course: "<<course<<endl;
         cout<<"Marks: "<<marks1<<", "<<marks2<<", "<<marks3<<endl;
         cout<<"Bonus Marks: "<<bonusMark<<endl;
          cout<<"Total Marks: "<<total<<endl;
    }
};

int main() {
    Result r;
    string name,course;
    int roll,m1,m2,m3,bonus;
    cout<<"enter name"<<endl;
    cin>>name;
        cout<<"enter roll number"<<endl;
    cin>>roll;
    cout<<"enter course name"<<endl;
    cin>>course;
     r.setStudent(name, roll, course);
    cout<<"enter marks"<<endl;
    cin>>m1;
    cin>>m2;
    cin>>m3;
        
     r.setMarks(m1, m2, m3);
    cout<<"entetr bonus marks"<<endl;
    cin>>bonus;
    r.setBonus(bonus);
      r.displayResult();

}
