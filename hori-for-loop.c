#include <stdio.h>

int main(void) {
	int i;
	int j;

	for (i = 0; i <= 10; i++) {
		for (j = 0; j <= 10; j++) {
			printf("%d", j);
		}
		printf("%d", i);
	}

	return (0);
}
