#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void) {
	int i, j;
	int *p, *ptr;

	p = &i;
	ptr = &j;

	printf("$ Simple Calculator to which uses all the arithmentic operators :\n");
	i = add(100, 1000);
	printf("$ The total sum is : %d\n", i);
	j = sub(100, 10);
	printf("$ The total answer for subtraction is : %d\n", j);

	printf("\nSize Section for all Datatypes :\n");
	printf("$ The size of int 'i' is : %lu bytes\n", sizeof(i));
	printf("$ The size of int 'j' is : %lu bytes\n", sizeof(j));

	printf("\nPointers section for all the Datatypes :\n");
	printf("$ The value of 'p' is : %p\n", p);
	printf("$ The value of 'ptr' is : %p\n", ptr);

	printf("\nThe size section for all the pointers:\n");
	printf("$ The size of the pointer 'p' is : %lu bytes\n", sizeof(p));
	printf("$ The size of the pointer 'ptr' is : %lu bytes\n", sizeof(ptr));

	printf("\nThe Addresses of all the variables :\n");
	printf("$ Note: the addresses are same as the value of the pointers :\n");
	printf("$ The Addrerss of 'i' is : %p\n", &i);
	printf("$ The Addresses of 'j' is : %p\n", &j);

	return (0);
}

int add(int x, int y) {
	int sum;

	sum = x + y;

	return (sum);
}

int sub(int a, int b) {
	int minus;

	minus = a - b;

	return (minus);
}
