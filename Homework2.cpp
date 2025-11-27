#include <iostream>
#include <limits> 
#include <locale>

int main() {
    
    std::setlocale(LC_ALL, "Russian");

    int array[10] = { 15, -3, 8, 20, 1, 9, 0, -10, 5, 12 };
    const int SIZE = 10;

    
    std::cout << "Массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

 

    int min_element = array[0];
    int max_element = array[0];

   
    for (int i = 1; i < SIZE; ++i) {
     
        if (array[i] < min_element) {
            min_element = array[i]; 
        }

       
        if (array[i] > max_element) {
            max_element = array[i]; 
        }
    }

   
    std::cout << "Минимальный элемент: " << min_element << std::endl;
    std::cout << "Максимальный элемент: " << max_element << std::endl;

    return 0;
}
