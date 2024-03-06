#include <iostream>
#include <stack>
#include <string>

// Функция которая с помощью стека проверяют нашлись ли всем скобкам пары
bool Scobki( const std::string& brackets ) {
    std::stack<char> stack;
    for( char bracket : brackets) {
        if( bracket == '(' || bracket == '[' || bracket == '{' ) 
        {
            stack.push(bracket);
        }
        else if( bracket == ')' || bracket == ']' || bracket == '}' ) 
        {
            if( stack.empty() ) 
            {
                return false;
            }
            char top = stack.top();
            stack.pop();
            if( (bracket == ')' && top != '(') ||
                (bracket == ']' && top != '[') ||
                (bracket == '}' && top != '{') ) 
            {
                return false;
            }
        }
    }
    return stack.empty();
}

// применение функции проверки скобок
int main() 
{
    std::string brackets;
    std::cout << "Enter any brackets: ";
    std::cin >> brackets;

    if( Scobki(brackets) )
    {
        std::cout << "True\n";
    }
    else
    {
        std::cout << "False\n";
    }

    return 0;
}
