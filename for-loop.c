#include <stdio.h>

int main(void) {
	int num;
	int *p;
	int digi;
	int *ptr;

	p = &num;
	ptr = &digi;
	
	for (digi = 0;digi <= 10; digi++) {
		for (num = 0; num <= 10; num++) {
			if (num >= 10)
				putchar('1');
			putchar('0' + num % 10);
		}
		putchar('\n');
	}

	printf("\nThe size of the 1st integer is : %lu bytes\n", sizeof(num));
	printf("The size of the 2nd integer is : %lu bytes\n", sizeof(digi));

	printf("\nThe address of the 1st integer is : %p\n", &num);
	printf("The address of the 2nd integer is : %p\n", &digi);

	printf("\nThe size of the 1st pointer is : %lu bytes\n", sizeof(p));
	printf("The size of the 2nd pointer is : %lu bytes\n", sizeof(ptr));

	printf("\nThe address of the 1st pointer is : %p\n", &p);
	printf("The address of the 2nd pointer is : %p\n", &ptr);

	printf("\nThe value of 'p, i.e. the 1st pointer' is : %p\n", p);
	printf("The value of 'ptr, i.e. the 2nd pointer' is : %p\n", ptr);

	return (0);
}
