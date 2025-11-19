#include <iostream>
#include <locale> 
int main() {
  
    std::setlocale(LC_ALL,"Russian");

    int number;
  
    int sum = 0;

    std::cout << "Введите целое число или число '0', чтобы закончить:\n";
    std::cin >> number;
    
    while (number != 0) {
       
        sum = sum + number;

        std::cout << "Введите целое число или число '0', чтобы закончить:\n";
        std::cin >> number;
    }
    
    std::cout << "Сумма: " << sum << std::endl;

    return 0;
}
