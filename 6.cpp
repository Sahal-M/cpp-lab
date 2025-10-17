#include <iostream>
using namespace std;

class Telephonebill {
    string name;
    string address;
    string telno;
    int noOfcalls;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Telephone Number: ";
        cin >> telno;
        cout << "Enter Number of Calls: ";
        cin >> noOfcalls;
    }

    friend void calculateamount(Telephonebill t);
};

void calculateamount(Telephonebill t) {
    int amount = t.noOfcalls * 2;
    cout << "\nName: " << t.name << endl;
    cout << "Address: " << t.address << endl;
    cout << "Telephone Number: " << t.telno << endl;
    cout << "Number of Calls: " << t.noOfcalls << endl;
    cout << "Amount to be paid: Rs. " << amount << endl;
}

int main() {
    Telephonebill t;
    t.input();
    calculateamount(t);
    
}
