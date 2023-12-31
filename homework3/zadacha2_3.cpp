#include <iostream>

int even_sum(int n) {
    int sum = 0;
    // Започваме цикъла от 2 и увеличаваме с 2 на всяка итерация
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    // Въвеждане на стойността на n
    std::cout << "Въведете стойността на n: ";
    std::cin >> n;

    // Извеждане на сумата на четните числа
    std::cout << "Сумата на четните числа от 2 до " << n << " е: " << even_sum(n) << std::endl;

    return 0;
}

