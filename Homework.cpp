#include <iostream>
#include <locale>


int calc(int x, int y) {
    return x + y;
}


int calc(int x, double y) {
    return x - (int)y;
}


int calc(double x, int y) {
    return (int)x * y;
}


int calc(double x, double y) {

    return (int)(x / y);
}


int main() {

    int a = 4;
    int b = 8;
    std::setlocale(LC_ALL, "Russian");
    std::cout << "x = " << a << ", y = " << b << std::endl;
    std::cout << std::endl;


    int result_sum = calc(a, b);
    std::cout << "Сложение: " << result_sum << std::endl;


    int result_sub = calc(a, (double)b);
    std::cout << "Вычитание: " << result_sub << std::endl;


    int result_mul = calc((double)a, b);
    std::cout << "Умножение: " << result_mul << std::endl;

    int result_div = calc((double)a, (double)b);
    std::cout << "Деление: " << result_div << std::endl;

    return 0;
}
