#include <iostream>
#include <string>
#include <vector>



int main() {
    // sets all ints in numbers array to 0
    int numbers[5] = {0};
    // sets first to ints as designated below and the rest to 0
    int numbers2[5] = {17, 38};

    // Multidimensional array 
    int solarPanels[2][3] = {{0, 1, 2}, {3, 4, 5}};

    // dynamic array
    std::vector<int> dynArray(3);

    dynArray[0] = 200;
    dynArray[1] = 487;
    dynArray[2] = 365;

    std::cout << "Length of dynArray: " << dynArray.size() << std::endl;

    std::cout << "add a new value to the vector: ";
    int newValue;
    std::cin >> newValue;
    dynArray.push_back(newValue);

    // strings! Yay!
    std::string first = "Hello ";
    std::string last = "World!";
    std::string concat = first + last;

}