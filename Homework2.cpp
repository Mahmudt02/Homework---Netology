#include <iostream>
#include <locale> 

int main() {
    
    std::setlocale(LC_ALL, "Russian");

    int number; 
    int originalNumber;
    int sum = 0;

    std::cout << "Введите целое число:\n";
    std::cin >> number;
 
    originalNumber = number;

    while (number > 0) {

     
        int lastDigit = number % 10;

   
        sum = sum + lastDigit;
       
        
        number = number / 10;
      
    }

    std::cout << "Сумма цифр: " << sum << std::endl;

    return 0;
}
