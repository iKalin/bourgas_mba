#include <iostream>

int main() {
    int a, b;
    std::cout << "Въведи първото цяло число: ";
    std::cin >> a;
    std::cout << "Въведи второто цяло число: ";
    std::cin >> b;

    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;
    std::cout << a << " % " << b << " = " << (a % b) << std::endl;

    return 0;
}

