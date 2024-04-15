#include <iostream>
#include <vector>
#include <thread>
#include <algorithm>
#include <mutex>

// Мьютекс
std::mutex mtx;

// Генерация псевдослучайных чисел от 0 до 9999
int getRandomNumber()
{
    return rand() % 10000;
}


// Функция для вычисления суммы трех максимальных элементов в массиве
void SumOfTopThree(std::vector<int>& container, int& sum) 
{
    // Потокобезопасность
    mtx.lock();

    std::partial_sort(container.begin(), container.begin() + 3, container.end(), std::greater<int>());

    sum = container[0] + container[1] + container[2];

    mtx.unlock();
}

int main() 
{
    srand(time(0)); // Генерация случайных чисел теперь зависит от времени

    std::vector<int> container(10000);

    // Заполнение контейнера случайными числами
    for (int i = 0; i < 10000; ++i)
    {
        container[i] = getRandomNumber();
    }

    int sum = 0;

    // Создание потоков для параллельного вычисления
    std::thread t1(SumOfTopThree, std::ref(container), std::ref(sum));
    std::thread t2(SumOfTopThree, std::ref(container), std::ref(sum));

    // Ожидание завершения потоков
    t1.join();
    t2.join();

    std::cout << "Sum of the three biggest: " << sum << std::endl;

    return 0;
}
