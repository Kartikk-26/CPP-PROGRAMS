#include <iostream>

using namespace std;

class Sareal {
    int s; // Fix: Added missing semicolon

public:
    void read(const int &x) {
        // x++; // Not allowed as const
        s = x; // Fix: Assigning the value of x to the member variable s
    }

    int ar() const { // Fix: Added const to the member function declaration
        return s;
    }
};

int main() {
    Sareal obj;
    obj.read(5);
    cout << obj.ar() << endl;
    return 0; // Fix: Added return statement for the main function
}
