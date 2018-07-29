#include <iostream>


using namespace std;
int main() {
    
    Start: // label for goto statement

    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1;
    cin >> num2;

    // if statements
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (num1 < num2) {
        cout << num1 << " is less than " << num2 << endl;
    } else { 
        cout << num1 << " is equal to " << num2 << endl;
    }

    // ternary operator
    bool isEqual = (num1 == num2) ? true : false;
    
    enum Days {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    int day;

    cout << "Enter a number for a day of the week (Sunday = 0): ";
    cin >> day;

    // case/switch statement
    switch (day) {
        case Sunday:
            cout << "You entered Sunday" << endl;
            break;

        case Monday:
            cout << "You entered Monday" << endl;
            break;

        case Tuesday:
            cout << "You entered Tuesday" << endl;
            break;

        case Wednesday:
            cout << "You entered Wednesday" << endl;
            break;

        case Thursday:
            cout << "You entered Thursday" << endl;
            break;
        
        case Friday:
            cout << "You entered Friday" << endl;
            break;

        case Saturday:
            cout << "You entered Saturday" << endl;
            break;

        default:
            cout << "You entered an invalid number!" << endl;
            break;
    }

    // loops!


    cout << "do you want to repeat the program? (y/n): ";
 
    char repeat;
    cin >> repeat;

    if (repeat == 'y'){
        goto Start; // goto statement
    }

    int number = -1;
    while (number != 0) { // while loop
        cout << "enter 0 to exit the loop: "; 
        cin >> number;
    }


    do { // do...
        cout << "this code still ran even though the number is 0, enter it again to leave again: ";
        cin >> number;
    } while (number != 0); // ...while loop

    for (int i = 0; i < 10; i++) { // for loop
        cout << "i = " << i << endl;
    }

    int numbers[5] = {1, 2, 3, 4, 5};

    for (int numb : numbers) {
        cout << "every number in numbers array: " << numb << endl;
    }

    // i know about continue and break statements,
    // i dont really want to code something for them in this file.

}