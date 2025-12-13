#include <iostream>
#include <locale>

void counting_function() {
    std::setlocale(LC_ALL, "Russian");
    static int count = 0;


    count++;

   
    std::cout << "Количество вызовов функции counting_function(): " << count << std::endl;
}

int main(int argc, char** argv)
{
    for (int i = 0; i < 10; i++)
    {
        counting_function();
    }

    return 0;
}
