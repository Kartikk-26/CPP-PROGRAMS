#include<iostream>
using namespace std;

class Swap 
{
private:
    int num1, num2;

public:
    void read() 
    {
        cout << "ENTER THE FIRST NUMBER:\n";
        cin >> num1;

        cout << "ENTER THE SECOND NUMBER:\n";
        cin >> num2;
        cout<< endl;
    }


    void show() 
    {
        cout << "BEFORE SWAPPING: NUM 1 = " << num1 << ", NUM 2 = " << num2 << endl;
        cout<< endl;

        int temp = num1;
        num1 = num2;
        num2 = temp;

        cout << "AFTER SWAPPING: NUM 1  = " << num1 << ", NUM 2 = " << num2 << endl;
        cout<< endl;
    }
};

int main() 
{
    cout<<"                                  ****SWAPPING PROGRAM IN C++****                                 \n";

    Swap swapObj;
    swapObj.read();
    swapObj.show();

    return 0;
}

