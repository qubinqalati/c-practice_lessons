#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *buffer;
	size_t bufsize = 32;
	size_t ch;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL) {
		perror("Oops!! Something went wrong!\n");
		exit (1);
	}
	printf("$ ");
	ch = getline(&buffer, &bufsize, stdin);
	printf("%s", buffer);

	return (0);
}
