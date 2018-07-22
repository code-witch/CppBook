#include <iostream>
#define PI 3.14159

using namespace std;

// Global variables
int num1 = 0;
int num2 = 0;
int result = 0;

typedef char BYTE;

BYTE someValue = 42;

constexpr double getPi() {return 22.0 / 7.0;}
constexpr double getTau() {return 2 * getPi();}



void multiplyNumbers() {
    cout << "Enter the first number to multiply: ";
    cin >> num1;

    cout << "Enter the second number to multiply: ";
    cin >> num2;

    // multiply the numbers 
    result = num1 * num2;

    // display result
    cout << num1 << " x " << num2 << " = " << result << endl;
}

int main() {
    multiplyNumbers();

    // you can use 'auto' to determine types for you
    auto aNumber = 80;
    cout << "aNumber is " << sizeof(aNumber) << " bytes long." << endl;

    cout << "getTau() = " << getTau() << endl;
}