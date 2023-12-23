#include <iostream>

int main() {
    double deposit, interestRate, interest, total;
    std::cout << "Въведи сумата на влога: ";
    std::cin >> deposit;

    // Определяне на лихвения процент
    if (deposit < 1000) {
        interestRate = 0.03; // 3%
    } else if (deposit <= 5000) {
        interestRate = 0.05; // 5%
    } else {
        interestRate = 0.07; // 7%
    }

    // Изчисляване на лихвата и общата сума
    interest = deposit * interestRate;
    total = deposit + interest;

    // Извеждане на резултатите
    std::cout << "Внесени: " << deposit << " лв\n";
    std::cout << "Лихва: " << interest << " лв\n";
    std::cout << "Сума по сметката: " << total << " лв\n";

    return 0;
}

