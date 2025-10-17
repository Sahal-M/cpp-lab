#include <iostream>
using namespace std;

class Book {
private:
    string BookID;
    char BookName[100];
    float BookPrice;

public:
    void inputdetails() {
    cout << "Enter Book ID: ";
      cin >> BookID;
        cout << "Enter Book Name: ";
        cin >> BookName; 
        cout << "Enter Book Price: ";
        cin >> BookPrice;
        cout<<endl;
    }

    void displaydetails() {
        cout << "Book ID: " << BookID << ", Name: " << BookName << ", Price: Rs " << BookPrice << endl;
    }

    float total_cost(int n) {
        return BookPrice * n;
    }
};

int main() {
    Book b1, b2, b3;
    int copies;

    cout << "Enter details for book 1:\n";
    b1.inputdetails();
    cout << "Enter number of copies: ";
    cin >> copies;
    

    cout << "Enter details for book 2:\n";
    b2.inputdetails();
    cout << "Enter number of copies: ";
    cin >> copies;
   

    cout << "Enter details for book 3:\n";
    b3.inputdetails();
    cout << "Enter number of copies: ";
    cin >> copies;
    

    b1.displaydetails();
    cout << "Total cost: Rs " << b1.total_cost(copies) << "\n\n";

     b2.displaydetails();
    cout << "Total cost: Rs " << b2.total_cost(copies) << "\n\n";

    b3.displaydetails();
    cout << "Total cost: Rs " << b3.total_cost(copies) << "\n";
}
