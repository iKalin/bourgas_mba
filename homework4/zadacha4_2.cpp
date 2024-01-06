#include <iostream>
#include <cmath>

class Triangle {
private:
    double a, b, c;

    bool isValid(double a, double b, double c) {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }

public:
    // Конструктор без параметри
    Triangle() : a(0), b(0), c(0) {}

    // Конструктор с параметри
    Triangle(double sideA, double sideB, double sideC) {
        if (isValid(sideA, sideB, sideC)) {
            a = sideA;
            b = sideB;
            c = sideC;
        } else {
            std::cout << "Невалиден триъгълник. Задайте на трите страни стойност 0." << std::endl;
            a = b = c = 0;
        }
    }

    // Функция за обиколка
    double perimeter() const {
        return a + b + c;
    }

    // Функция за лице по формулата на Херон
    double area() const {
        double s = perimeter() / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // Проверка за равнобедрен триъгълник
    bool is_isosceles() const {
        return (a == b) || (a == c) || (b == c);
    }

    // Проверка за равностранен триъгълник
    bool is_equilateral() const {
        return (a == b) && (b == c);
    }

    // Функции за височини
    double height_to_a() const {
        return (2 * area()) / a;
    }

    double height_to_b() const {
        return (2 * area()) / b;
    }

    double height_to_c() const {
        return (2 * area()) / c;
    }
};

int main() {
    // Създаване на обекти от тип Triangle
    Triangle t1;
    Triangle t2(3, 4, 5);

    // Въвеждане на дължини от конзолата
    double a, b, c;
    std::cout << "Въведете дължините на страните на триъгълника: ";
    std::cin >> a >> b >> c;
    Triangle t3(a, b, c);

    // Изпробване на функциите
    std::cout << "Обиколка на t3: " << t3.perimeter() << std::endl;
    std::cout << "Лице на t3: " << t3.area() << std::endl;
    std::cout << "t3 е равнобедрен: " << std::boolalpha << t3.is_isosceles() << std::endl;
    std::cout << "t3 е равностранен: " << std::boolalpha << t3.is_equilateral() << std::endl;
    std::cout << "Височина към a на t3: " << t3.height_to_a() << std::endl;
    std::cout << "Височина към b на t3: " << t3.height_to_b() << std::endl;
    std::cout << "Височина към c на t3: " << t3.height_to_c() << std::endl;

    return 0;
}

