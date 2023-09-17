#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    char buffer[512];
    int n;

    while((n = read(0, buffer, sizeof buffer)) > 0)
        write(1, buffer, n);

    if (n < 0) {
        perror("read");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
