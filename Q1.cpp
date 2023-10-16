#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int roll_no;
};

int main() {
    // Create an object of the Student class
    Student student1;

    // Assign values to the attributes of the object
    student1.name = "John";
    student1.roll_no = 2;

    // Print the values
    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Roll No: " << student1.roll_no << std::endl;

    return 0;
}
