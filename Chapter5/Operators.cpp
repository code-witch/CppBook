#include <iostream>

int main() {

    {
        // these statements are local to this block of code. 
        // this helps keep certain variables local.
        int daysInYear = 365;
    }

    int num1 = 10;
    int num2 = 3;

    {
        using namespace std;
        cout << "num1 + num2: " << num1 + num2 << endl;
        cout << "num1 - num2: " << num1 - num2 << endl;
        cout << "num1 * num2: " << num1 * num2 << endl;
        cout << "num1 / num2: " << num1 / num2 << endl;
        cout << "num1 % num2: " << num1 % num2 << endl;

    }
    // relational operators
    int age = 20;
    bool equality = (age == 100); // equal to
    equality = (age != 2); // not equal to
    equality = (age <= 30); // less than or equal to
    equality = (age <= 60 && age != 0); // and statement (&&)
    equality = (age > 0 || age < 20); // or statement (||)
    equality = !(age == 20); // not statement (!)
    

}