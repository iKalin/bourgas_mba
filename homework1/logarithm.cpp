#include <iostream>
#include <cmath>

int main() {
    double number;
    std::cout << "Въведи реално число: ";
    std::cin >> number;

    std::cout << "Квадратен корен на " << number << " = " << sqrt(number) << std::endl;
    std::cout << "Кубичен корен на " << number << " = " << cbrt(number) << std::endl;
    std::cout << "Натурален логаритъм на " << number << " = " << log(number) << std::endl;

    return 0;
}

