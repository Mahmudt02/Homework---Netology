#include <iostream>
#include <iomanip>
#include <clocale>

int main() {
  
    std::cout << std::boolalpha;
    std::setlocale(LC_ALL, "Russian");
   

    
    std::cout << "\nОператор: || (Логическое ИЛИ)" << std::endl;
    std::cout << "A\tB\tA || B" << std::endl;
    std::cout << "--------------------" << std::endl;

   
    std::cout << true << "\t" << true << "\t" << (true || true) << std::endl;

    
    std::cout << false << "\t" << true << "\t" << (false || true) << std::endl;

  
    std::cout << true << "\t" << false << "\t" << (true || false) << std::endl;

    std::cout << false << "\t" << false << "\t" << (false || false) << std::endl;

   
    std::cout << "\nОператор: && (Логическое И)" << std::endl;
    std::cout << "A\tB\tA && B" << std::endl;
    std::cout << "--------------------" << std::endl;

    
    std::cout << true << "\t" << true << "\t" << (true && true) << std::endl;

    
    std::cout << false << "\t" << true << "\t" << (false && true) << std::endl;

    std::cout << true << "\t" << false << "\t" << (true && false) << std::endl;

  
    std::cout << false << "\t" << false << "\t" << (false && false) << std::endl;

    return 0;
}