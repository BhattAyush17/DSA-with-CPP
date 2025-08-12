#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    scanf("%d", 10);
    std::cout << "This is the first Cpp program and I'll conquer it." << std::endl;

    int arr[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}