#include <iostream>

// Рассчитаем следующее число
int WhatANumber( int number ) 
{
    int sum = 0;
    while ( number > 0 ) 
    {
        int digit = number % 10;
        sum += digit * digit;
        number /= 10;
    }
    return sum;
}

// С помощью рекурентной функции понимаем счасливое или нет
void HappyNumber( int number)
{
    // все числа вычисленные таким способом станут в итоге меньше 243
    while (number > 243)
    {
        number = WhatANumber(number);
    }

    // Из теории чисел если цикл больше 243 и он не затронул 1 , то она там и не содержится
    for ( int i = 0; i < 244; i++ )
    {
        if ( number == 1 )
        {
            std::cout << "Happy number" << std::endl;
            exit(0);
        }
        number = WhatANumber(number);
    }
    std::cout << "Sad number" << std::endl;
    exit(0);
}

int main()
{
	int number = 0;
	std::cout << "enter a number" << std::endl;
	std::cin >> number;
	HappyNumber( number);
}