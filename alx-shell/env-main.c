#include <stdio.h>

int main(int ac, char **av, char **env) {
	unsigned int x;

	x = 0;
	while (env[x] != NULL)
	{
		printf("%s\n", env[x]);
		x++;
	}

	return (0);
}
