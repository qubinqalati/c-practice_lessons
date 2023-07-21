#include <stdio.h>

int main(void) {
	int alpha;
	int beta;

	printf("Enter first number : ");
	scanf("%d", &alpha);
	printf("Enter second number : ");
	scanf("%d", &beta);

	if (alpha > beta) {
		printf("\nThe maximum number is : %d \n", alpha);
	}
	else {
		printf("\nThe maximum number is : %d \n", beta);
	}

	return (0);
}
