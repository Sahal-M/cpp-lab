#include <iostream>
using namespace std;

class Time {
private:
     int hours;
    int minutes;
    int seconds;

public:
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

   
    friend Time addTime(Time t1, Time t2);
};


Time addTime(Time t1, Time t2) {
    Time time;
    time.seconds = t1.seconds + t2.seconds;
    time.minutes = t1.minutes + t2.minutes + time.seconds / 60;
    time.seconds = time.seconds % 60;

    time.hours = t1.hours + t2.hours + time.minutes / 60;
    time.minutes = time.minutes % 60;

    return time;
}

int main() {
    Time t1, t2, sum;

    cout << "Enter first time:\n";
    t1.input();
    cout<<emdl;
    cout << "Enter second time:\n";
    t2.input();
    cout<<endl;
    sum = addTime(t1, t2);

    cout << "Sum of times: ";
    sum.display();

   
}
