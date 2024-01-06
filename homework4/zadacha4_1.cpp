#include <iostream>
#include <cmath>

// Структура за представяне на точка в 2D пространство
struct Point {
    int x;
    int y;
};

// Функция за изчисляване на Евклидовото разстояние между две точки
double calculateDistance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

int main() {
    Point p1, p2;
    
    // Въвеждане на координатите за първата точка
    std::cout << "Въведете координатите на първата точка (x y): ";
    std::cin >> p1.x >> p1.y;
    
    // Въвеждане на координатите за втората точка
    std::cout << "Въведете координатите на втората точка (x y): ";
    std::cin >> p2.x >> p2.y;
    
    // Изчисляване на разстоянието между двете точки
    double distance = calculateDistance(p1, p2);
    
    // Извеждане на разстоянието
    std::cout << "Разстоянието между двете точки е: " << distance << std::endl;
    
    return 0;
}

