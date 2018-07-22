#include <iostream>
#include <string>

using namespace std;

int main() {
    // declaring a variable
    int number;

    cout << "Enter a Number: ";

    // store the number into the variable
    cin >> number;

    // do the same for strings
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << name << "has entered the number: " << number << endl;

    return 0;
}