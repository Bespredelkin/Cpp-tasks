#include <stdio.h>
#include <cmath>

int main(void) {
	int euro_count = 0 ;
	scanf("%d", &euro_count);
	float dollar = euro_count * 1.09;
	printf("%f dollars\n", dollar);
    float ruble = dollar * 104.15;
	printf("%f rubles\n", ruble);
	return 0;



}