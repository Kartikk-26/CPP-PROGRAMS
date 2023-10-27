    #include <iostream>
    using namespace std;

    class userinfo {
        char name[20];
        int userID;
        float salary;

    public:
        void read() {
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter User ID: ";
            cin >> userID;
            cout << "Enter Salary: ";
            cin >> salary;
        }

        friend void display(userinfo);  // Friend Function Declaration
    };

    void display(userinfo ui) {  // Friend Function to access private data
    cout << "Details Of User & salary - \nUser Name: " << ui.name << "\nUser ID: " << ui.userID << "\nSalary: " << ui.salary << endl;
}

    int main() {
        userinfo obj;
        obj.read();
        display(obj);
        return 0;
    }



