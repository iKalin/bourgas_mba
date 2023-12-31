#include <iostream>
#include <string>

void greater_than_5(std::string A[], int N) {
    for (int i = 0; i < N; ++i) {
        if (A[i].length() > 5) {
            std::cout << A[i] << std::endl;
        }
    }
}

int main() {
    int N = 5; // Примерен размер на масив
    std::string A[] = {"Hello", "Kalin", "C++", "Programmer", "Maestro"}; 

    // Извикване на функцията с примерния масив
    greater_than_5(A, N);

    return 0;
}

