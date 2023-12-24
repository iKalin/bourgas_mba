#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Число 1? ";
    std::cin >> num1;
    std::cout << "Число 2? ";
    std::cin >> num2;

    if (num2 != 0) {
        double quotient = static_cast<double>(num1) / num2;
        std::cout << "Частно: " << quotient << std::endl;
    } else {
        std::cout << "Делението на нула не е позволено!" << std::endl;
    }

    return 0;
}

