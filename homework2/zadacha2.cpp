#include <iostream>
#include <string>

int main() {
    const std::string CORRECT_PASSWORD = "babajaga";
    const int MAX_ATTEMPTS = 3;
    std::string inputPassword;
    int attempts = 0;

    do {
        std::cout << "Въведете парола: ";
        std::cin >> inputPassword;
        attempts++;

        if (inputPassword == CORRECT_PASSWORD) {
            std::cout << "Успешен вход" << std::endl;
            break;
        } else {
            if (attempts >= MAX_ATTEMPTS) {
                std::cout << "Максимален брой неуспешни опити" << std::endl;
                break;
            }
            std::cout << "Грешна парола, опитайте отново." << std::endl;
        }

    } while (attempts < MAX_ATTEMPTS);

    return 0;
}

