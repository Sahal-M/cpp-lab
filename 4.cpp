#include <iostream>
using namespace std;

class area {
public:
    

      inline double circle(double radius) {
          float r1;
             r1 = 3.14159 * radius * radius;
          return r1;
    }

        inline double square(double side) {
            float r2;
          r2 = side * side;
    return r2;
        }

     inline double rectangle(double length, double width) {
         float r3;
          r3 = length * width;
         return r3;
    }

     inline double triangle(double base, double height) {
         float r4;
        r4 = 0.5 * base * height;
    return r4;
     }
};

int main() {
    area c;
    double radius, side, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle: " << c.circle(radius) << endl;
    cout<<endl;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square: " << c.square(side) << endl;
    cout<<endl;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << c.rectangle(length, width) << endl;
    cout<<endl;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << c.triangle(base, height) << endl;

    
}
