#include <iostream>
using namespace std;

class DSM {
private:
    int a, b;

public:
    static int v1;

    void read(int x, int y) {
        a = x;
        b = y;
        v1 = v1 + 1;
    }

    void show() {
        cout << a << " " << b << " ";
    }
};

int DSM::v1 = 0;

int main() {
    DSM d01, d02;
    d01.read(10, 20);
    d02.read(100, 200);
    d01.show();
    d02.show();
    cout << endl;  // Add a newline for better formatting
    cout << d01.v1 << endl;
    cout << d02.v1 << endl;
    cout << DSM::v1 << endl;
    return 0;  // Add a return statement to indicate successful completion
}
