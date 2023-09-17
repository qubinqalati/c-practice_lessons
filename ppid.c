#include <stdio.h>
#include <unistd.h>

int main(void) {
	pid_t myPpid;

	myPpid = getppid();
	printf("%u\n", myPpid);

	return (0);
}
