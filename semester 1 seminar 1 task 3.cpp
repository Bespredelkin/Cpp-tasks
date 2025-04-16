#include <stdio.h>
#include <cmath>

int main(void) {
	int number = 1;
	int summ = 0;
	for (; number != 0;) {
		scanf("%d", &number);
		if (number > 0) {
			summ += number;
			printf("sum is %d\n", summ);
		}
	}

	printf("sum is %d\n", summ);
	return 0;
