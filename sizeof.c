#include <stdio.h>

int main(void) {
	int n;

	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
	printf("Size of type 'double' on my machine is : %lu bytes\n", sizeof(double));
	printf("Size of type 'signed int on my machine is : %lu bytes\n", sizeof(signed int));
	printf("size of type 'unsigned int' on my machine is : %lu bytes\n", sizeof(unsigned int));
	printf("Size of type 'long int' on my machine is : %lu bytes\n", sizeof(long int));
	printf("size of type 'long long int' on my machine is : %lu bytes\n", sizeof(long long int));
       printf("Size of type 'short int' on my machine is : %lu bytes\n", sizeof(short int));	

	return (0);
}
