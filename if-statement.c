#include <stdio.h>

int main(void) {
	int num;
	int bravo;
	int eden;
	int zulu;
	int violet;
	int jasper;
	int oil;

	printf("\nEnter your Number : ");
	scanf("%d", &num);

	if (num > 15) {
		for (bravo = 0; bravo <= 10; bravo++) {
			printf("%d", bravo);
		}
		printf("\n");
	}
	else if (num == 0) {
		eden = 0;
		while (eden <= 10) {
			printf("%d", eden);
			printf("\n");
			eden++;
		}
	}
	else if (num < 10) {
		zulu = 0;
		while (zulu <= 10) {
			for (violet = 0; violet <= 10; violet++) {
				printf("%d", violet);
			}
			printf("\n");
			zulu++;
		}
	}
	else {
		for (jasper = 0; jasper <= 10; jasper++) {
			for (oil = 0; oil <= 10; oil++) {
				printf("%d", oil);
			}
			printf("\n");
		}
	}
}
