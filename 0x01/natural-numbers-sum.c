#include <stdio.h>

int main (void) {
	int i;
	int sum = 0;

	printf("The first 10 natural number is : \n");

	for (i = 1; i < 11; i++) {
		printf("%d ", i);
		sum = sum + i;
	}
	printf("\nThe Sum is : %d", sum);
	printf("\n");

	return (0);
}
