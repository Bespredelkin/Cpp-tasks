#include <stdio.h>
#include <cmath>

int main(void) {
	int number = 0 ;
	scanf("%d", &number);
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			printf("%d", number / i);
			return 0;
		}
		
	}
	
	printf("prostoe chislo");
	return 0;



}
