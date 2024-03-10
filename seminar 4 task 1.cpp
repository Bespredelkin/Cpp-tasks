#include <iostream>
#include <vector>
#include <list>
#include <string>

// Класс для представления элемента в таблице
class HashElem
{
public:
    std::string key; // Ключ
    int value;       // Значение

    // Структура элемента
    HashElem(std::string key, int value) : key(key), value(value) {}
};

// Класс хеш-таблицы
class HashTable
{
private:
    int size;
    std::vector<std::list<HashElem>> table;

    // Хеш-функция
    int hashFunction(std::string key)
    {
        int hash = 0;
        for (char c : key)
        {
            hash += c;
        }
        return hash % size;
    }

public:
    HashTable(int size) : size(size), table(size) {}

    // Добавление элемента в таблицу
    void insert(std::string key, int value)
    {
        int index = hashFunction(key);
        table[index].push_back(HashElem(key, value));
    }

    // Поиск элемента в таблице
    int search(std::string key)
    {
        int index = hashFunction(key);
        for (HashElem& elem : table[index])
        {
            if (elem.key == key)
            {
                return elem.value;
            }
        }
        return -1;
    }

    // Удаление элемента из таблицы
    void remove(std::string key)
    {
        int index = hashFunction(key);
        for (auto iterator = table[index].begin(); iterator != table[index].end(); ++iterator)
        {
            if ((*iterator).key == key)
            {
                table[index].erase(iterator);
                return;
            }
        }
    }
};


// Пример
int main()
{
    HashTable hashTable(10);

    hashTable.insert("apple", 1);
    hashTable.insert("banana", 2);
    hashTable.insert("orange", 3);

    std::cout << hashTable.search("apple") << std::endl;  // 1
    std::cout << hashTable.search("banana") << std::endl; // 2
    std::cout << hashTable.search("orange") << std::endl; // 3

    hashTable.remove("apple");
    hashTable.remove("banana");
    hashTable.remove("orange");

    std::cout << hashTable.search("apple") << std::endl;  // -1
    std::cout << hashTable.search("banana") << std::endl; // -1
    std::cout << hashTable.search("orange") << std::endl; // -1

    return 0;
}