#include <iostream>
#include <locale> 

int main() {


    std::setlocale(LC_ALL, "Russian");

    int N; 

    std::cout << "Введите целое число:\n";
    std::cin >> N;
    
    for (int i = 1; i <= 10; i++) {

        
        
        std::cout << N << " x " << i << " = " << (N * i) << std::endl;
    }

    return 0;
}
