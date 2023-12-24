#include <iostream>
#include <cstdlib> // За std::abs (абсолютна стойност)

int main() {
    int number;
    int countInRange = 0;
    int sumEven = 0;
    int sumOdd = 0;

    while (true) {
        std::cout << "Въведете цяло число (0 за край): ";
        std::cin >> number;

        if (number == 0) {
            break; // Прекъсване на цикъла
        }

        // Проверка дали числото е в диапазона [10, 20]
        if (number >= 10 && number <= 20) {
            countInRange++;
        }

        // Определяне на четността на числото
        number = std::abs(number); // Преобразуване в положително число
        if (number % 2 == 0) {
            sumEven += number;
        } else {
            sumOdd += number;
        }
    }

    // Извеждане на резултатите
    std::cout << "Брой числа в диапазона [10, 20]: " << countInRange << std::endl;
    std::cout << "Сума на четните числа S1: " << sumEven << std::endl;
    std::cout << "Сума на нечетните числа S2: " << sumOdd << std::endl;

    // Проверка дали сумите S1 и S2 са равни
    if (sumEven == sumOdd) {
        std::cout << "Сумите S1 и S2 са равни." << std::endl;
    } else {
        std::cout << "Сумите S1 и S2 не са равни." << std::endl;
    }

    return 0;
}

