#include <iostream>
#include <Locale>

int fibonacci(int n) {

  


    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int count;

    std::setlocale(LC_ALL, "Russian");
    std::cout << "Введите число: ";
    
    if (!(std::cin >> count) || count < 0) {
        std::cerr << "Некорректный ввод." << std::endl;
        return 1;
    }

    
    std::cout << "Числа Фибоначчи: ";

    for (int i = 0; i < count; ++i) {
       
        std::cout << fibonacci(i);

        
        if (i < count - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
