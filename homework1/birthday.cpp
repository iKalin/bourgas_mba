#include <iostream>
#include <string>

// Константа за настоящата година
const int CURRENT_YEAR = 2023;

int main() {
    std::string name;
    int birth_year;

    // Четене на име и година на раждане от конзолата
    std::cout << "Въведи име: ";
    std::cin >> name;
    std::cout << "Въведи годината на раждане: ";
    std::cin >> birth_year;

    // Изчисляване и показване на възрастта
    int age = CURRENT_YEAR - birth_year;
    std::cout << name << " е на " << age << " години." << std::endl;

    return 0;
}

