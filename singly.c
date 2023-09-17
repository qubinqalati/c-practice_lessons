#include <stdio.h>
#include <stdlib.h>

void display();

struct node {
	int data;
	struct node* next;
};

int main(void) {
	struct node* first;
	struct node* second;
	struct node* third;
	struct node* forth;
	struct node* fifth;
	struct node* sixth;
	struct node* seventh;

	first = malloc(sizeof(struct node));
	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));
	forth = malloc(sizeof(struct node));
	fifth = malloc(sizeof(struct node));
	sixth = malloc(sizeof(struct node));
	seventh = malloc(sizeof(struct node));

	first->data = 10;
	second->data = 20;
	third->data = 30;
	forth->data = 40;
	fifth->data = 50;
	sixth->data = 60;
	seventh->data = 70;

	first->next = second;
	second->next = third;
	third->next = forth;
	forth->next = fifth;
	fifth->next = sixth;
	sixth->next = seventh;
	seventh->next = NULL;

	display(first);
	
	printf("\nThe value of 'first' is : %p\n", first);
	printf("The value of 'second' is : %p\n", second);
	printf("The value of 'third' is : %p\n", third);
	printf("The value of 'forth' is : %p\n", forth);
	printf("The value of 'fifth' is : %p\n", fifth);
	printf("The value of 'sixth' is : %p\n", sixth);
	printf("The value of 'seventh' is : %p\n", seventh);

	return (0);
}

void display(struct node* first) {
	if (first == NULL) {
		printf("Error\n");
	}
	struct node* ptr = NULL;
	ptr = first;

	while (ptr != NULL) {
		printf("%d-> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL");
	putchar('\n');
}
