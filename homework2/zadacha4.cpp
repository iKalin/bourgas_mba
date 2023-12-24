#include <iostream>
#include <vector>

int main() {
    const int product_count = 15; // Примерен брой на продуктите, променете според нуждите
    std::vector<double> prices(product_count); // Масив за цените на продуктите

    // Въвеждане на цените
    std::cout << "Въведете цените на " << product_count << " продукта:\n";
    for (int i = 0; i < product_count; ++i) {
        std::cout << "Цена на продукт " << i + 1 << ": ";
        std::cin >> prices[i];
    }

    int discount_count = 0; // Брой на продуктите с намаление

    // Намаляване на цените и броене на продуктите с намаление
    for (int i = 0; i < product_count; ++i) {
        if (prices[i] > 10) {
            prices[i] *= 0.95; // Намаляване на цената с 5%
            discount_count++;
        }
    }

    // Извеждане на новите цени и броя на намалените продукти
    std::cout << "Нови цени на продуктите:\n";
    for (int i = 0; i < product_count; ++i) {
        std::cout << "Продукт " << i + 1 << ": " << prices[i] << " лв\n";
    }
    std::cout << "Брой продукти с намалена цена: " << discount_count << std::endl;

    return 0;
}

