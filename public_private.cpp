#include <iostream>
using namespace std;

class demo1
{
public:
    void display() {
        cout << "HERE IS THE FIRST INHERITANCE DEMO CLASS OF THE PROGRAM\n";
    }
};

class demo2 : public demo1 
{
public:
    void show() {
        cout << "HERE DERIVED CLASS FROM DEMO1\n";
    }
};

class demo3 : public demo2 
{
};

int main() 
{
    demo3 obj1;
    obj1.display();
    demo2 obj2;
    obj2.show();
    return 0;
}




