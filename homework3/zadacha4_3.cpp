#include <iostream>
#include <vector>
#include <cmath> 

// Функция за отпечатване на закръглените оценки и средната оценка
void print_grades_and_average(const std::vector<double>& marks) {
    double sum = 0;
    for (size_t i = 0; i < marks.size(); ++i) {
        int rounded_mark = static_cast<int>(round(marks[i]));
        std::cout << "Закръглена оценка " << i << ": " << rounded_mark << std::endl;
        sum += marks[i];
    }
    double average = sum / marks.size();
    std::cout << "Средна оценка: " << average << std::endl;
    std::cout << "Закръглена средна оценка: " << static_cast<int>(round(average)) << std::endl;
}

int main() {
    int N;
    std::vector<double> marks;

    // Въвеждане на броя оценки
    std::cout << "Въведете брой оценки: ";
    std::cin >> N;

    // Ако броят на оценките е по-голям от нула, помолете потребителя да въведе N на брой дробни числа
    if (N > 0) {
        double mark;
        for (int i = 0; i < N; ++i) {
            std::cout << "Въведете оценка " << i << ": ";
            std::cin >> mark;
            // Проверка дали оценката е между 2 и 6 включително
            if (mark >= 2.0 && mark <= 6.0) {
                marks.push_back(mark);
            } else {
                std::cout << "Оценката трябва да е между 2 и 6 включително." << std::endl;
                --i; // Намалете i, за да повторите въвеждането за този индекс
            }
        }
    }

    // Извикване на функцията за отпечатване на оценки и средна оценка
    print_grades_and_average(marks);

    return 0;
}

