#include <stdio.h>
#define LEN (10)
#define DYNAMIC_MEMORY
void massive(int* mass, int length) {
    for (int i = 0; i < length; i++)
    {
        mass[i] = i * i;
        printf("%d ", mass[i]);
    }
}
int main(void)
{
#ifdef DYNAMIC_MEMORY
    int* mass = new int[LEN];
#else
    int mass[LEN];
#endif
    massive(mass, LEN);

#ifdef DYNAMIC_MEMORY
    delete[] mass;
#endif    

    return 0;
}
