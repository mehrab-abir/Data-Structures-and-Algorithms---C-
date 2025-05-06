#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "core.h"

int main() {

	int select;

	do {
		printf("\n");
		printf("1. Triangle\n");
		printf("2. Inverted Triangle\n");
		printf("3. Diamond- Combination of the two above\n");
		printf("0. Exit\n");

		printf("Select from the list above: ");
		scanf("%d", &select);

		switch (select) {
		case 1:
			triangle();
			break;
		case 2:
			inverted_triangle();
			break;
		case 3:
			diamond();
			break;
		case 0:
			printf("\nExiting...\n\nGood Bye.\n");
			break;
		default:
			printf("\nInvalid Input. Enter only 1, 2 or 0.\n");
		}

	} while (select != 0);


	return 0;
}