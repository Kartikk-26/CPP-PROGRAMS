#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int roll_no;
    std::string phone_number;
    std::string address;
};

int main() {
    // Create two objects of the Student class
    Student student1, student2;

    // Assign values to the attributes of the first student (Sam)
    student1.name = "Sam";
    student1.roll_no = 1;
    student1.phone_number = "7877474002";
    student1.address = "NEW KESHAV NAGAR";

    // Assign values to the attributes of the second student (John)
    student2.name = "John";
    student2.roll_no = 2;
    student2.phone_number = "9783365463";
    student2.address = "CA CIRCLE ";

    // Print the information of both students
    std::cout << "Student 1:" << std::endl;
    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Roll No: " << student1.roll_no << std::endl;
    std::cout << "Phone Number: " << student1.phone_number << std::endl;
    std::cout << "Address: " << student1.address << std::endl;

    std::cout << "\nStudent 2:" << std::endl;
    std::cout << "Name: " << student2.name << std::endl;
    std::cout << "Roll No: " << student2.roll_no << std::endl;
    std::cout << "Phone Number: " << student2.phone_number << std::endl;
    std::cout << "Address: " << student2.address << std::endl;

    return 0;
}
