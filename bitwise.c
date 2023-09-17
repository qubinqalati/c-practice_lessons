#include <stdio.h>

int main(void) {
	char ch = 3;
	
	printf("%d\n", ch>>1);

	printf("\nThe size of the 'ch' variable is : %lu byte(s)\n", sizeof(char));

	printf("\nThe address of the variable 'ch' is : %p\n", &ch);

	return (0);
}
