#include <stdio.h>

int calc(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return 0;
    }
}

double calc(double a, double b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return 0;
    }
}


int main(void)
{
    int a = 3;
    int b = 2;
    char c = '-';
    double d = 5.0;
    double e = 7.0;
    printf("%d\n", calc(a, b, c));
    printf("%f", calc(d, e, c));


}