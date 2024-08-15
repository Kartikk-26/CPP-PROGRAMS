<<<<<<< HEAD
#include <iostream>
using namespace std;

class DSM {
private:
    int a, b;

public:
    static int v1;
    DSM(){
        a=10;b=20;v1=v1+1;
    }
};

int DSM::v1 = 100;

int main() {
    DSM d01, d02;
    cout << endl;  // Add a newline for better formatting
    cout << d01.v1 << endl;
    cout << d02.v1 << endl;
    cout << DSM::v1 << endl;
    return 0;  // Add a return statement to indicate successful completion
}
=======
#include <iostream>
using namespace std;

class DSM {
private:
    int a, b;

public:
    static int v1;
    DSM(){
        a=10;b=20;v1=v1+1;
    }
};

int DSM::v1 = 100;

int main() {
    DSM d01, d02;
    cout << endl;  // Add a newline for better formatting
    cout << d01.v1 << endl;
    cout << d02.v1 << endl;
    cout << DSM::v1 << endl;
    return 0;  // Add a return statement to indicate successful completion
}
>>>>>>> 1b7018d398ee3c878bbc71fbcac1e3bd854c7f73
