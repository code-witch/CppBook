#include <iostream>

const double PI = 3.14159;

// prototypes
double area(double radius);
double area(double radius, double height);
double circumference(double radius);
int getFibNumber(int index);
void displayArray(int numbers[], int length);
void displayArray(char message[], int length);
void area_reference(double radius, double& result);
inline long double_number (int number);

int main() {

    double radius;
    int fib;
    int num;

    std::cout << "enter a radius: ";
    std::cin >> radius;

    std::cout << "Area is: " << area(radius) << std::endl;
    std::cout << "Circumference is: " << circumference(radius) << std::endl;

    std::cout << "Get a fibonacci number: ";
    std::cin >> fib;
    std::cout << getFibNumber(fib) << std::endl;

    int nums[5] = {1, 2, 3, 4, 5};
    char msg[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    displayArray(nums, 5);
    displayArray(msg, 6);

    std::cout << "Enter A Radius: ";
    std::cin >> radius;
    double areaFetched = 0;
    area_reference(radius, areaFetched);
    std::cout << "The area is " << areaFetched << std::endl;

    std::cout << "Enter an Int ";
    std::cin >> num;
    std::cout << "Int Doubled is: " << double_number(num) << std::endl;

}

void displayArray(char message[], int length){
    for (int i = 0; i < length; i++) {
        std::cout << message[i] << " ";
    }
    std::cout << std::endl;
}


void displayArray(int numbers[], int length){
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}



// definitions
double area(double radius) {
    return PI * radius * radius;
}


// open cylinder bc im lazy to do the top and bottom "A = L + 2B = 2πrh + 2πr2 = 2πr(h + r) = πd(r + h)"
double area(double radius, double height) {
    return area(radius) * height;
}

double circumference(double radius) {
    return 2 * PI * radius;
}

int getFibNumber(int index) {
    if(index < 2) {
        return index;
    } else {
        return getFibNumber(index - 1) + getFibNumber(index - 2);
    }
}


void area_reference(double radius, double& result) {
    result = PI * radius * radius;
}

//define inline function that doubles 
inline long double_number (int number) {
    return number * 2;
}

