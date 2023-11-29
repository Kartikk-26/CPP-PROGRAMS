#include <iostream>
using namespace std;

class demoCM {
    int V1, V2;

public:
    demoCM() { // constructor
        V1 = 0;
        V2 = 0;
    }

    void read(int a, int b) {
        V1 = a;
        V2 = b;
    }

    void showv1() const { // const member function
        // V1++; // This line would give an error because updating V1 is not allowed in a const member function
        cout << "V1 is: " << V1 << endl;
    }

    int showv2() const { // const member function
        // V2++; // This line would give an error because updating V2 is not allowed in a const member function
        cout << "V2 is: " << V2 << endl;
        return V2;
    }

    void showbothvalue() {
        cout << "V1 is: " << V1 << endl;
        cout << "V2 is: " << V2 << endl;
    }
};

int main() {
    demoCM obj;
    obj.read(10, 20);

    obj.showv1(); // Call showv1() instead of cout << obj.showv2() << endl;
    obj.showv2();

    return 0;
}