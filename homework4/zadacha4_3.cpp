#include <iostream>

class Screen {
private:
    int width;
    int height;

public:
    // Конструктор, който задава стойности на ширината и височината
    Screen(int w, int h) : width(w), height(h) {}

    // Член-функция, която класифицира екрана
    void classify() {
        double d = static_cast<double>(width) / height;
        if (d < 1.4) {
            std::cout << "Екранът е тесен" << std::endl;
        } else if (d <= 1.9) {
            std::cout << "Екранът е широк" << std::endl;
        } else {
            std::cout << "Екранът е много широк" << std::endl;
        }
    }
};

int main() {
    // Масив от екрани
    Screen screens[] = {Screen(40, 20), Screen(50, 30), Screen(10, 10)};

    // Обхождане на масива и класифициране на екраните
    for (Screen& screen : screens) {
        screen.classify();
    }

    return 0;
}

