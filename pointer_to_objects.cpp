<<<<<<< HEAD
#include <iostream>
using namespace std;

class TPdemo{
    int v1;
    public:
    TPdemo(){
        v1=10000;
    }
    void displ(int v1){
        cout<<"The Value Of Arguement Variable 1 = "<<v1;
        cout<<"\nThe Value Of Data Member V1 = "<<this->v1;
    }
};

int main(){
    TPdemo tp;
    tp.displ(200);
    return 0;
}
=======
#include <iostream>
using namespace std;

class TPdemo{
    int v1;
    public:
    TPdemo(){
        v1=10000;
    }
    void displ(int v1){
        cout<<"The Value Of Arguement Variable 1 = "<<v1;
        cout<<"\nThe Value Of Data Member V1 = "<<this->v1;
    }
};

int main(){
    TPdemo tp;
    tp.displ(200);
    return 0;
}
>>>>>>> 1b7018d398ee3c878bbc71fbcac1e3bd854c7f73
