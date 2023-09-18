#include <stdio.h>
#include <string.h>

int main(void) {
	char str[50] = "Oops! Something went wrong!";
	char * token = strtok(str, " ");
	while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}

	return (0);
}
