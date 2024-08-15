#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time() : hour(0), minute(0), second(0) {}

    void setTime(int h, int m, int s) {
        if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59) {
            hour = h;
            minute = m;
            second = s;
        } else {
            cout << "Invalid time values. Time remains unchanged." << endl;
        }
    }

    void display() {
        cout << "TIME IS : " << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time time;
    int h, m, s;

    cout << "Enter hour (0-23): ";
    cin >> h;
    cout << "Enter minute (0-59): ";
    cin >> m;
    cout << "Enter second (0-59): ";
    cin >> s;

    time.setTime(h, m, s);
    time.display();

    return 0;
}
