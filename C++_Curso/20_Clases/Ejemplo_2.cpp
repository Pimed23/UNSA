#include <iostream>
using namespace std;

class Time {

    public:
        void setTime();
        int getHour();
        int getMinute();
        void display();
        Time addTime( Time, Time );
    
    private:
        int hour;
        int minute;
};

void Time::setTime() {
    cout << "Enter hour: ";
    cin >> hour;
    cout << "Enter minute: ";
    cin >> minute;
}

int Time::getHour() {
    return hour;
}

int Time::getMinute() {
    return minute;
}

void Time::display() {
    cout << "HOUR:   " << hour << endl;
    cout << "MINUTE: " << minute << endl;
}

Time Time::addTime( Time t1, Time t2 ) {
    Time t3;
    t3.hour = t1.hour + t2.hour;
    t3.minute = t1.minute + t2.minute;
    return t3;
}

int main() {
    Time t1, t2, t3, sum;
    t1.setTime();
    t2.setTime();
    t1.display();
    t2.display();
    sum = t3.addTime( t1, t2 );
    t3.display();
    sum.display();
    return 0;
}