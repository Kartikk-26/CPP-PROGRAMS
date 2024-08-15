#include<iostream>

using namespace std;

int main() {
    float numerator, denominator, result;

    // Input
    cout << "Enter Numerator: ";
    cin >> numerator;

    cout << "Enter Denominator: ";
    cin >> denominator;

    try {
        // Check for division by zero
        if (denominator == 0)
            throw runtime_error("Logical Error: Cannot divide by zero");

        // Calculate and display the result
        result = numerator / denominator;
        cout << "Result: " << numerator << " / " << denominator << " = " << result;
    }
    catch (const runtime_error& ex) {
        // Handle the exception
        cout << ex.what() << endl;
    }
    return 0;
}
