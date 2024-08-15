#include<iostream>
using namespace std;

class base {
public:
    virtual void display() {
        cout << "HERE DISPLAY FUNCTION OF BASE CLASS\n";
    }
};
class derived : public base {
public:
    void display(){
        cout << "HERE DISPLAY FUNCTION OF DERIVED CLASS\n";
    }
};

int main() {
    // Creating objects of base and derived classes
    base baseObj;
    derived derivedObj;

    // Calling the display function of the base class
    cout << "Calling display function of base class:\n";
    baseObj.display();

    // Calling the display function of the derived class
    cout << "\nCalling display function of derived class:\n";
    derivedObj.display();
    return 0;
}
