#include <iostream>
#include <vector>
#include <string>

// Функция печати для любого контейнера
template<typename Container>
void Print( const Container& container, const std::string& split ) 
{
    auto iterator = container.begin();
    std::cout << *iterator;
    iterator++;
    for( ; iterator != container.end(); ++iterator ) 
    {
        std::cout << split << *iterator;
    }
    std::cout << std::endl;
}

// Пример из условий
int main()
{
    std::vector<int> data = { 1, 2, 3 };
    Print( data, ", " );  // 1, 2, 3
    return 0;
}