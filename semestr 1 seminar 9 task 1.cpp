#include <iostream>
template <typename T, typename K = int, double, float>
concept size = sizeof(T) <= sizeof(double) && sizeof(K) <= sizeof(double);
template <typename T, typename K> requires size<T,K> void calc(K& a,K& b, char c)
{
    switch (c)
    {
    case '+':
        return T a + b;
    case '-':
        return T a - b;
    case '*':
        return T a * b;
    case '/':
        return T a / b;
    default:
        return 0;
    }
}

int main()
{
    int a = 3;
    int b = 2;
    char c = '-';
    double d = 10000000;
    double e = 10000;
    std::cout << calc(a, b, c) << std::endl;
    std::cout << calc(d, e, c) << std::endl;
}
