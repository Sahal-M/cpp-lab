#include <iostream>
using namespace std;

class Car {
public:
       string brand;
        string model;
       int year;

    void input() {
    cout << "Enter brand: ";
     cin >> brand;
        cout << "Enter model: ";
      cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }

    void displaydetails() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car c1, c2, c3;

    cout << "Enter details for car 1:" << endl;
    c1.input();

    cout << "\nEnter details for car 2:" << endl;
    c2.input();

    cout << "\nEnter details for car 3:" << endl;
    c3.input();

    cout << "\nCar Details:" << endl;
    c1.displaydetails();
    c2.displaydetails();
    c3.displaydetails();

   
}
