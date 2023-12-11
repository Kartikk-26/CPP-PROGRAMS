#include<iostream>
#include<stdexcept>

using namespace std;

class DivisionCalculator {
private:
    float numerator;
    float denominator;

public:
    DivisionCalculator() : numerator(0), denominator(0) {}

    void inputNumbers() {
        cout << "Enter Numerator: ";
        cin >> numerator;

        cout << "Enter Denominator: ";
        cin >> denominator;
    }

    void performDivision() {
        try {
            if (denominator == 0)
                throw runtime_error("Logical Error: Cannot divide by zero");

            float result = numerator / denominator;
            cout << "Result: " << numerator << " / " << denominator << " = " << result << endl;
        }
        catch (const runtime_error& ex) {
            cout << ex.what() << endl;
        }
    }
};

int main() {
    DivisionCalculator calculator;
    calculator.inputNumbers();
    calculator.performDivision();

    return 0;
}
