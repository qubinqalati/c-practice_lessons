#include <stdio.h>

int main(void) {
	int num;
	int *p;
	int **ptr;

	num = 50;
	p = &num;
	ptr = &p;

	printf("The size of my integer 'num' is : %lu bytes\n", sizeof(num));
	printf("The size of my pointer '*p' is : %lu bytes\n", sizeof(p));
	printf("The size of the pointer to a pointer '**ptr' is : %lu bytes\n", sizeof(ptr));

	printf("\nThe value of my integer is : %d\n", num);
	printf("The value of my integer using the pointer variable is : %d\n", *p);

	printf("\nThe Address of my integer 'num' is : %p\n", &num);
	printf("The value of my initialized pointer is : %p\n", p);

	printf("\nThe Address of my pointer 'p' is : %p\n", &p);
	printf("The value of the pointer to a pointer is : %p\n", ptr);

	*p = 500;
	printf("\nThe value of a derefenced integer '*p' is : %d\n", num);

	**ptr = 5000;
	printf("\nThe value of derefenced pointer to a pointer '**ptr' is : %d\n", num);

	return (0);
}
