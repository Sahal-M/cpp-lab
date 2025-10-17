#include <iostream>
using namespace std;

class area {
public:
    
    double area(double radius) {
        float r1;
             r1 = 3.14159 * radius * radius;
          return r1;
    }

   
    double area(int side) {
        float r2;
          r2 = side * side;
    return r2;
    }

    
    double area(int length, int width) {
        float r3;
          r3 = length * width;
         return r3;
    }

    
    double area(double base, double height) {
         float r4;
        r4 = 0.5 * base * height;
    return r4;
    }
};

int main() {
    area obj;
    double radius, base, height;
    int side, length, width;

    cout<<"Enter radius of circle: ";
    cin>>radius;
    cout<<"Area of Circle: "<<obj.area(radius)<<endl;
    cout<<endl;
    cout<<"Enter side of square: ";
    cin>>side;
    cout<<"Area of Square: "<<obj.area(side)<<endl;
    cout<<endl;
    cout<<"Enter length and width of rectangle: ";
    cin>>length>>width;
    cout<<"Area of Rectangle: "<<obj.area(length, width)<<endl;
    cout<<endl;
    cout<<"Enter base and height of triangle: ";
    cin>>base>>height;
    cout<<"Area of Triangle: "<<obj.area(base, height)<<endl;

   
}
