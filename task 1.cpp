#include <iostream>

int binarySearch(int array[], int size, int element) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == element) 
        {
            return mid; // Элемент найден
        }
        else if (array[mid] < element) 
        {
            left = mid + 1;  // Искомый элемент находится в правой половине
        }
        else
        {
            right = mid - 1; // Искомый элемент находится в левой половине
        }
    }

    return -1; // Элемент не найден
}

int main() // пример
{
    int array[] {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int element = 5;

    int index = binarySearch(array, size, element);

    if (index != -1) {
        std::cout << "Element was found in index " << index << std::endl;
    }
    else {
        std::cout << "Element was not found" << std::endl;
    }

    return 0;
}