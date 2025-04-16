#include <stdio.h>

int main(void)
{
    int length;
    int summ = 0;
    scanf("%d", &length);
    int* numbers = new int[length];
    for (int i = 0; i < length; i++)
    {
        numbers[i] = i * i;
        summ += numbers[i];
    }
    printf("сумма равна %d\n", summ);
    delete[] numbers;
    return 0;
}
