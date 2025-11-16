#include <iostream>
#include <clocale>

int main() {

    std::setlocale(LC_ALL, "Russian");

    int A, B, C;

   
    std::cout << "Введите первое число: ";
    std::cin >> A;
    std::cout << "Введите второе число: ";
    std::cin >> B;
    std::cout << "Введите третье число: ";
    std::cin >> C;

    std::cout << "\nРезультат: ";

 
    if (A >= B && A >= C) {
        std::cout << A << " ";

       
        if (B >= C) {
            std::cout << B << " " << C << std::endl; 
        }
        else {
            std::cout << C << " " << B << std::endl; 
        }
    }
    
    else if (B >= A && B >= C) {
        std::cout << B << " "; 

        
        if (A >= C) {
            std::cout << A << " " << C << std::endl; 
        }
        else {
            std::cout << C << " " << A << std::endl; 
        }
    }
  
    else {
        std::cout << C << " "; 

        
        if (A >= B) {
            std::cout << A << " " << B << std::endl; 
        }
        else {
            std::cout << B << " " << A << std::endl; 
        }
    }

    return 0;
}
