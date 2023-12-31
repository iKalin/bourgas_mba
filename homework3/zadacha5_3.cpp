#include <iostream>
#include <algorithm> // За std::sort

const int SIZE = 4;
int scores[SIZE] = {95, 100, 28, 56};

// Функция за отпечатване на индексите, стойностите и адресите на всяка клетка от масива
void print_array_info(const int* arr, const int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Индекс: " << i 
                  << ", Стойност: " << arr[i] 
                  << ", Адрес: " << (void*)&arr[i] << std::endl;
    }
}

int main() {
    // Указател към началото на масива
    int* begin = scores;
    // Указател към първия адрес след последния елемент на масива
    int* end = begin + SIZE;

    // Отпечатване на информацията за оригиналния масив
    std::cout << "Информация за оригиналния масив:" << std::endl;
    print_array_info(begin, SIZE);

    // Сортиране на масива с помощта на std::sort
    std::sort(begin, end);

    // Отпечатване на информацията за сортирания масив
    std::cout << "\nИнформация за сортирания масив:" << std::endl;
    print_array_info(begin, SIZE);

    // Итерация през масива с помощта на указателите begin и end и цикъл for
    std::cout << "\nИтерация през сортирания масив с помощта на указатели:" << std::endl;
    for (int* p = begin; p != end; ++p) {
        std::cout << "Стойност: " << *p << ", Адрес: " << (void*)p << std::endl;
    }

    return 0;
}

