//
/*#include<iostream>
using namespace std;

int main(){
    cout<<"JAI HIND";
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<"Output:"<<a;
    return 0;
}*/

#include<iostream>
using namespace std;
class circle
{
    public:
    double radius;

    double compute_area()
    {
        return 3.14*radius*radius;
    }    
};

int main()
{
    circle obj;
    obj.radius=5.5;
    cout<<"radius is "<< obj.radius<<"\n";
    cout<<"area is : "<<obj.compute_area();
    return 0;

}