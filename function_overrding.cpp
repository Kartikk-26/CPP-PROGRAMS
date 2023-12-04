#include<iostream>
using namespace std;

class Base {
public:
    virtual void Display() {
        cout << "Here display fun. Of base class" << endl;
    }
};

class Derived : public Base {
public:
    void Display() override {
        cout << "Display of derived class" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Calling display function of base class
    baseObj.Display();

    // Calling display function of derived class
    derivedObj.Display();

    return 0;
}
