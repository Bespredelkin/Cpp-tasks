#include <iostream>
#include <list>
#include <algorithm>

// Функция которая разделяет список на положительные и отрицательные элементы
void splitList( const std::list<int>& original, std::list<int>& positive, std::list<int>& negative ) 
{
    for( int elem : original ) 
    {
        if( elem >= 0 ) 
        {
            positive.push_back( elem );
        }
        else 
        {
            negative.push_back( elem );
        }
    }
    // Сортировка списков
    positive.sort();
    negative.sort();
}

// Пример реализации
int main() 
{
    std::list<int> list = { 3, -2, 5, -8, 7, 0, -4 };
    std::list<int> poslist;
    std::list<int> neglist;

    splitList( list, poslist, neglist );

    std::cout << "Positive elements: ";
    for( int elem : poslist ) 
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Negative elements: ";
    for( int elem : neglist ) 
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
