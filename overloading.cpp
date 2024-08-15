#include <iostream>
#include<string.h>
using namespace std;

class displaydata {
public:
    void show(int vi) {
        cout << "integer var.value: " << vi << endl;
    }

    void show(double v2) {
        cout << "floating var.value: " << v2 << endl;
    }

    void show(char* v3) {
        cout << "character var.value: " << v3 << endl;
    }
};

int main() {
    displaydata obj1;
    obj1.show(100);
    obj1.show(991.75);
    obj1.show("Function Overloading");
    return 0;
}
