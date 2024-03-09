#include <iostream>
#include <map>
#include <string>
#include <algorithm>

// Функция которая находит слово, встречающееся чаще всего в тексте
// Для этого будем определять слова с помощью слово : количество
std::string WordDetector( const std::string& text ) 
{
    std::map<std::string, int> сount;
    std::string word;
    std::string testWord;
    for( char c : text ) 
    {
        // Смотрим если символ является пробелом или знаком пунктуации
        if( std::isspace(c) || std::ispunct(c) )
        {
            // Приводим текущее слово к нижнему регистру
            std::transform( testWord.begin(), testWord.end(), testWord.begin(), ::tolower );

            if( !testWord.empty() ) 
            {
                сount[testWord]++;
            }
            testWord.clear();
        }
        else 
        {
            // Добавляем знак если он не является пробелом или знаком пунктуации в конец слова
            testWord.push_back(c);
        }
    }
    // Учитываем слово, если оно не заканчивается на пробел или пунктуацию
    if( !testWord.empty() ) 
    {
        std::transform( testWord.begin(), testWord.end(), testWord.begin(), ::tolower );
        сount[testWord]++;
    }

    // Находим слово
    int maxCount = 0;
    std::string Wordisimo;
    for(const auto& pair : сount)
    {
        if(pair.second > maxCount || (pair.second == maxCount && pair.first < Wordisimo))
        {
            maxCount = pair.second;
            Wordisimo = pair.first;
        }
    }

    return Wordisimo;
}

// Пример применения 
int main() 
{
    std::string text = "O cholero freddy fazbear, o cholero ar ar ar ar.";
    std::string result = WordDetector( text );
    std::cout << "The most frequent word is: " << result << std::endl;
    return 0;
}
