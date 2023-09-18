#include <stdio.h>
#include <unistd.h>

int main(void) {
	char *argv[] = {"./PATH/getline.nkq"};

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1) {
		perror("Error: ");
	}
	printf("After execve\n");

	return (0);
}
