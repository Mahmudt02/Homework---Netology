#include <iostream>
#include <locale>

int main() {
    
    std::setlocale(LC_ALL, "Russian");
     
        const int ROWS = 3; 
        const int COLS = 6;

       
        int array[ROWS][COLS] = {
            {1, 2, 3, 4, 5, 6},
            {7, 8, 9, 10, 11, 12},
            {13, 14, 15, 16, 17, 18}
        };

        int min_val = array[0][0];
        int max_val = array[0][0];

        int min_row = 0;
        int min_col = 0;
        int max_row = 0;
        int max_col = 0;

        
        std::cout << "Массив:" << std::endl;

        
        for (int i = 0; i < ROWS; ++i) {
           
            for (int j = 0; j < COLS; ++j) {

                
                std::cout << array[i][j] << "\t";

                
                if (array[i][j] < min_val) {
                    min_val = array[i][j];
                    min_row = i;
                    min_col = j;
                }

                
                if (array[i][j] > max_val) {
                    max_val = array[i][j];
                    max_row = i;
                    max_col = j;
                }
            }
           
            std::cout << std::endl;
        }

     
        std::cout << "\nИндекс минимального элемента: " << min_row << " " << min_col << std::endl;
        std::cout << "Индекс максимального элемента: " << max_row << " " << max_col << std::endl;

        return 0;
    }
