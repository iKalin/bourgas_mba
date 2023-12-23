#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout << "Въведете три цели числа: ";
    std::cin >> num1 >> num2 >> num3;

    // Проверка за наличие на поне едно четно и поне едно нечетно число
    bool hasEven = (num1 % 2 == 0) || (num2 % 2 == 0) || (num3 % 2 == 0);
    bool hasOdd = (num1 % 2 != 0) || (num2 % 2 != 0) || (num3 % 2 != 0);

    if (hasEven && hasOdd) {
        std::cout << "Да" << std::endl;
    } else {
        std::cout << "Не" << std::endl;
    }

    return 0;
}

