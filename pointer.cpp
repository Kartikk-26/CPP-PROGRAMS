#include <iostream>
using namespace std;

class Userinfo {
public:
    char name[20];
    int id;
    int age;
};

// Function to input user information
void inputUserInfo(Userinfo& user) {
    cout << "Enter Username: ";
    cin >> user.name;

    cout << "Enter User ID: ";
    cin >> user.id;

    cout << "Enter User age: ";
    cin >> user.age;
}

// Function to display user information
void displayUserInfo(const Userinfo& user) {
    cout << "Username: " << user.name << endl;  //printf("Usewrnmae :",user.name)
    cout << "User ID: " << user.id << endl;
    cout << "User Age: " << user.age << endl;
}

int main() {
    Userinfo u1;

    // Call the input function to get user information
    inputUserInfo(u1);

    // Call the display function to show user information
    displayUserInfo(u1);

    return 0;
}
