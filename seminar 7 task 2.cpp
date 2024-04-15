#include <iostream>
#include <thread>

// Генерация псевдослучайных чисел от 0 до 9999
int getRandomNumber()
{
    return rand() % 10000;
}


// Функция для сортировкм массива вставкой
void Sorting(int* array, int start, int end)
{
    for (int i = start + 1; i < end; ++i) 
    {
        int current = array[i];
        int j = i - 1;
        while (j >= start && array[j] > current) 
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = current;
    }
}

int main()
{
    srand(time(0)); // Генерация случайных чисел теперь зависит от времени

    const int n = 10000; // Размер массива

    int* array = new int[n];

    // Заполнение контейнера случайными числами
    for (int i = 0; i < n; ++i)
    {
        array[i] = getRandomNumber();
    }

    // Разделение массива на две части
    const int middle = n / 2;

    // Создание потоков для двупоточной сортировки
    std::thread t1(Sorting, array, 0, middle);
    std::thread t2(Sorting, array, middle, n);

    // Ожидание завершения потоков
    t1.join();
    t2.join();

    return 0;
}