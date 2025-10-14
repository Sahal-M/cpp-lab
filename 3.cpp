#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Function to display length and width
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }
};

int main() {
    Rectangle r1;         // default constructor called
    Rectangle r2(10, 5);  // parameterized constructor called

    cout << "Rectangle 1: ";
    r1.display();

    cout << "Rectangle 2: ";
    r2.display();

    
}
