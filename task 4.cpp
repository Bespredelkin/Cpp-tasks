#include <iostream>
#include <string>

// Функция для вычисления и вывода представления числа в факториальной системе счисления
void Factorial( int number )
{
    std::string system;
    int factorial = 1;
    int digit = 0;
    while ( number > 0 )
    {
        digit = number % ( factorial + 1 );
        number /= ( factorial + 1 );
        factorial++; 
        if( digit >= 0 )
        {
            system += ".";
            system += std::to_string( digit );
        }
    }
    for ( int i = size( system ) - 1; i >= 0; i-- )
    {
        std::cout << system[i];
    }
}

int main() 
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "number " << number << " in factorial sistem is ";
    Factorial( number );
    return 0;
}