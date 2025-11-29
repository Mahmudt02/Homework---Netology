#include <iostream>
#include <Locale>

void calculateAndPrintPower(int value, int power) {

    std::setlocale(LC_ALL, "Russian");
    
    int result = 1;

    
    for (int i = 0; i < power; i++) {
        result *= value;
    }

   
    std::cout << value << " в степени " << power << " = " << result << std::endl;
}

int main(int argc, char** argv)
{
    
    calculateAndPrintPower(5, 2);

    calculateAndPrintPower(3, 3);

    calculateAndPrintPower(4, 4);

    return 0;
}
