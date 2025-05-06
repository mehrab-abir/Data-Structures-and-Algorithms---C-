#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int addbyCopy(int a, int b) {

	printf("\nIn the addbyCopy function:\n");
	printf("Address of %d: %d\n", a, &a);
	printf("Address of %d: %d\n", b, &b);

	int sum;
	sum = a + b;
	return sum;
}

int addbyRef(int *a, int *b) {

	printf("\nIn the addbyRef function:\n");
	printf("Address of %d: %d\n", *a, &a); //printing address of number 1 which is stored in pointer a
	printf("Address of %d: %d\n", *b, b); //printing address of number 2 which is stored in pointer b

	int sum;
	sum = *a + *b;
	return sum;
}