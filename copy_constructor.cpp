<<<<<<< HEAD
//PROGRAM FOR COPY CONSTRUCTOR 
#include <iostream>

class CopyConst { // Class name should start with a capital letter

private:
    int v1, v2, v3;

public:
    CopyConst(int n1, int n2, int n3) { // Use {} instead of []
        v1 = n1;
        v2 = n2;
        v3 = n3;
        std::cout << "Demo for parameterized constructor" << std::endl;
    }

    CopyConst(const CopyConst &obj) { // Copy constructor should use const
        v1 = obj.v1;
        v2 = obj.v2;
        v3 = obj.v3;
    }

    void display() { // Use {} instead of []
        std::cout << "Variable 1: " << v1 << std::endl;
        std::cout << "Variable 2: " << v2 << std::endl;
        std::cout << "Variable 3: " << v3 << std::endl;
    }
};

int main() {
    CopyConst C1(100, 200, 300);
    CopyConst C2(C1);

    std::cout << "Here, Parameterized constructor" << std::endl;

    C1.display();

    std::cout << "Here, calling the copy constructor" << std::endl;

    C2.display();

    return 0;
}

//DIFFERENCE BETWWEN CONSTRUCTOR AND DESTRUCTOR 
/*Constructors

1. The constructor initializes the class and allots the memory to an object.

2. If the object is no longer required, then destructors demolish the objects.

3. It receives arguments & can be overloaded.

4 They are often called in successive order.


Destructors

1. If the object is no longer required, then destructors demolish the objects.

2. When the program gets terminated, the

destructor is called automatically. 3. It does not receive any argument & cant overloaded.

4. They are often called in reverse order of constructor. (explicit define)

=======
//PROGRAM FOR COPY CONSTRUCTOR 
#include <iostream>

class CopyConst { // Class name should start with a capital letter

private:
    int v1, v2, v3;

public:
    CopyConst(int n1, int n2, int n3) { // Use {} instead of []
        v1 = n1;
        v2 = n2;
        v3 = n3;
        std::cout << "Demo for parameterized constructor" << std::endl;
    }

    CopyConst(const CopyConst &obj) { // Copy constructor should use const
        v1 = obj.v1;
        v2 = obj.v2;
        v3 = obj.v3;
    }

    void display() { // Use {} instead of []
        std::cout << "Variable 1: " << v1 << std::endl;
        std::cout << "Variable 2: " << v2 << std::endl;
        std::cout << "Variable 3: " << v3 << std::endl;
    }
};

int main() {
    CopyConst C1(100, 200, 300);
    CopyConst C2(C1);

    std::cout << "Here, Parameterized constructor" << std::endl;

    C1.display();

    std::cout << "Here, calling the copy constructor" << std::endl;

    C2.display();

    return 0;
}

//DIFFERENCE BETWWEN CONSTRUCTOR AND DESTRUCTOR 
/*Constructors

1. The constructor initializes the class and allots the memory to an object.

2. If the object is no longer required, then destructors demolish the objects.

3. It receives arguments & can be overloaded.

4 They are often called in successive order.


Destructors

1. If the object is no longer required, then destructors demolish the objects.

2. When the program gets terminated, the

destructor is called automatically. 3. It does not receive any argument & cant overloaded.

4. They are often called in reverse order of constructor. (explicit define)

>>>>>>> 1b7018d398ee3c878bbc71fbcac1e3bd854c7f73
*/