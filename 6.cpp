#include <stdio.h>

int main(void)
{
    int a = 3, b = 5, e = 0;
    int& ra = a, & rb = b, & re = e;
    re = rb, rb = ra, ra = re;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int xc = 4, xd = 6, f = 0;
    int* c = &xc;
    int* d = &xd;
    f = *d, * d = *c, * c = f;
    printf("c = %d\n", *c);
    printf("d = %d\n", *d);
    return 0;
}