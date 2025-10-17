#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    
    Rectangle() {
        length = 0;
        width = 0;
    }

   
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }
};

int main() {
    Rectangle r1;
 cout << "Rectangle 1: ";
    r1.display();

    
    float l,w;
    cout<<"enter length"<<endl;
    cin>>l;
    cout<<"enter width"<<endl;
    cin>>w;
    
    Rectangle r2(l, w);  

   

    cout << "Rectangle 2: ";
    r2.display();

    
}
