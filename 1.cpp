#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void readData() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }

    void displayDetails() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1, car2, car3;

    cout << "Enter details for car 1:" << endl;
    car1.readData();

    cout << "\nEnter details for car 2:" << endl;
    car2.readData();

    cout << "\nEnter details for car 3:" << endl;
    car3.readData();

    cout << "\nCar Details:" << endl;
    car1.displayDetails();
    car2.displayDetails();
    car3.displayDetails();

   
}
