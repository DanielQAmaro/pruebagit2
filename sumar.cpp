#include <iostream>

int main()
{
    int num1 = 5;
    int num2 = 10;
    int suma = num1 + num2;
    int respuesta = sumar(num1, num2);
    std::cout << "Suma total: " << respuesta << std::endl;

   return 0;
}

int sumar(int num1, int num2)
{
    return num1 + num2;
}