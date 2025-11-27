#include <iostream>
#include <algorithm> 
#include <locale>

void printArray(int arr[], int size, const char* label) {
    std::setlocale(LC_ALL, "Russian");
    std::cout << label << ": ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int SIZE = 10;

    int array[SIZE] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };

    
    printArray(array, SIZE, "Массив до сортировки");

   

  
    for (int i = 0; i < SIZE - 1; ++i) {
      
        for (int j = SIZE - 1; j > i; --j) {

            
            if (array[j - 1] > array[j]) {
              
                std::swap(array[j - 1], array[j]);

               
            }
        }
    }

    
    printArray(array, SIZE, "Массив после сортировки");

    return 0;
}
