#include <iostream>
using namespace std;

class LandAnimal {
public:
    void walk() {
        cout << "This animal can walk on land." << endl;
    }
};

class AquaticAnimal {
public:
    void swim() {
        cout << "This animal can swim in water." << endl;
    }
};

class AmphibiousAnimal : public LandAnimal, public AquaticAnimal {
public:
    void describe() {
        cout << "This is an amphibious animal:" << endl;
        walk();   
        swim();   
    }
};

int main() {
    AmphibiousAnimal frog;
    frog.describe();

}
