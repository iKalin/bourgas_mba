#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double start, end, step;
    std::cout << "Начална стойност на x: ";
    std::cin >> start;
    std::cout << "Крайна стойност на x: ";
    std::cin >> end;
    std::cout << "Стъпка на изменение на x: ";
    std::cin >> step;

    std::cout << "X\tx^2\tx^3\n";

    for (double x = start; x <= end; x += step) {
        bool isBoundary = (std::fabs(x - start) < 1e-10) || (std::fabs(x - end) < 1e-10);

        // Отпечатване на x
        std::cout << std::fixed << std::setprecision(isBoundary ? 0 : 1) << x << "\t";

        // Отпечатване на x^2
        std::cout << std::fixed << std::setprecision(isBoundary ? 0 : 2) << x * x << "\t";

        // Отпечатване на x^3
        std::cout << std::fixed << std::setprecision(isBoundary ? 0 : 3) << x * x * x << "\n";
    }

    return 0;
}

