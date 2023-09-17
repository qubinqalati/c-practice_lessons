#include <stdio.h>

struct Company {
	char business[20];
	int year;
	float revenue;
};

int main(void) {
	struct Company alpha = {"Esty Shop", 2023, 100000};
	printf("\nBusiness Unit : %s\n", alpha.business);
	printf("Year : %d\n", alpha.year);
	printf("Revenue : %.2f\n", alpha.revenue);

	printf("\nSize of the struct is : %lu bytes\n", sizeof(struct Company));

	return (0);
}
