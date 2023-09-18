#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
	int x;

	for (x = 0; x < 5; x++) {
		if (fork() == 0) {
			execl("/bin/ls", "/ls", "-l", "/tmp", NULL);
			perror("execl");
			exit(1);
		}
	}
	for (x = 0; x < 5; x++) {
		wait(NULL);
	}

	return (0);
}
