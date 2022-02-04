#include <iostream>
#include <algorithm>
#include <vector>

void displayName(std::vector<int>& dynArray) {
    for_each(dynArray.begin(), dynArray.end(), [](int element) {std::cout << element << " ";});
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers;
    numbers.push_back(831);
    numbers.push_back(-28374);
    numbers.push_back(872634);
    numbers.push_back(45);

    displayName(numbers);
    std::cout << "Sorting Them in Decending Order" << std::endl;

    sort(numbers.begin(), numbers.end(), [](int num1, int num2) {return num2 < num1;});
    displayName(numbers);

}