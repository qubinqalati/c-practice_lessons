#include <stdio.h>

int main(void) {
	int num;
	int digi;
	int sum;
	int add;

	for (num = 0; num < 10; num++) {
		for (digi = 0; digi < 10; digi++) {
			printf("%d", digi);
		}
		printf("%d", num);
		printf(":");
		printf(" ");
		for (sum = 0; sum < 10; sum++) {
			printf("%d", sum);
			for (add = 0; add < 10; add++) {
				printf("%d", add);
			}
		}
	}
	printf("\n");
}
