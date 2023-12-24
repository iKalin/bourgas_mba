#include <iostream>

int main() {
    char ch;
    std::cout << "Въведи символ: ";
    std::cin >> ch;

    std::cout << "Символ: " << ch << ", ASCII код: " << static_cast<int>(ch) << std::endl;

    return 0;
}

