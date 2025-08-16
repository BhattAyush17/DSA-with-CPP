#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};

    // Sort in ascending order
    std::sort(arr.begin(), arr.end());

    std::cout << "Sorted array (ascending): ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort in descending order
    std::sort(arr.begin(), arr.end(), std::greater<int>());

    std::cout << "Sorted array (descending): ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}