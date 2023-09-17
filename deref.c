#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 98;
	char ch = 'Q';
	int *ptr;
	char *p;

	ptr = &x;
	p = &ch;

	printf("The value of 'x' is : %d\n", x);
	printf("The value of 'ptr' is : %p\n", ptr);
	printf("The value of 'ch' is : %c\n", ch);
	printf("The value of 'p' is : %p\n", p);

	printf("\nDereferencing :\n");
	*ptr = 'c';
	*p = 402;
	printf("The value of 'ptr' after dereferencing is : %c\n", x);
	printf("The value of 'p' after dereferencing is : %d\n", atoi(ch));

	return (0);
}
