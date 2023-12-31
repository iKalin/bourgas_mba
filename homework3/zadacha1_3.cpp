#include <iostream>
#include <cmath>

// Функция за изчисляване на лицето на триъгълник по формулата на Херон
double triangle_area(double a, double b, double c) {
    double p = (a + b + c) / 2.0; // Полупериметър
    double area = sqrt(p * (p - a) * (p - b) * (p - c)); // Формула на Херон
    return area;
}

int main() {
    double a, b, c;

    // Въвеждане на страните на триъгълника
    std::cout << "Въведете страните на триъгълника: ";
    std::cin >> a >> b >> c;

    // Проверка дали страните образуват валиден триъгълник
    if (a + b > c && a + c > b && b + c > a) {
        // Изчисляване и показване на лицето
        double area = triangle_area(a, b, c);
        std::cout << "Лицето на триъгълника е: " << area << std::endl;
    } else {
        // Ако страните не образуват триъгълник
        std::cout << "Невалидни страни на триъгълник!" << std::endl;
    }

    return 0;
}

