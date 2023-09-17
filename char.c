#include <stdio.h>

int main(void) {
	char ch[] = "Nkqubela";
	int x;

	printf("%s\n", ch);
	for (x = 1; x < 4; x++)
	{
		printf("%d", ch[x]);
	}
	putchar('\n');

	return (0);
}
