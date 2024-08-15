#include <iostream>
using namespace std;

class BaseDSM {
protected:
    int a, b;

public:
    static int v1;

    BaseDSM() : a(10), b(20) {
        v1 = v1 + 1;
    }
};

int BaseDSM::v1 = 100;

class DerivedDSM : public BaseDSM {
public:
    DerivedDSM() : BaseDSM() {
        // Additional initialization for the derived class if needed
    }
};

int main() {
    DerivedDSM d01, d02;
    
    cout << "d01.v1: " << d01.v1 << endl;
    cout << "d02.v1: " << d02.v1 << endl;
    cout << "BaseDSM::v1: " << BaseDSM::v1 << endl;

    return 0;
}
