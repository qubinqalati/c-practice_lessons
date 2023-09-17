#include <stdio.h>
#include <unistd.h>

int main(void) {
	pid_t myPid;

	myPid = getpid();
	printf("%u\n", myPid);

	return (0);
}
