#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av) {
	int x;

	for (x = 1;  x < ac; x++) {
		printf("%s\n", av[x]);
	}

	return (0);
}
