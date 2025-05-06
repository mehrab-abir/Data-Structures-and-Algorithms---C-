#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#include "problems.h";

int main() {

	printf("\t*** Assignment Three ****\n");
	printf("\t-------------------------\n");

	int select;

	do {
		printf("\n");
		printf("1. Unite Matrix\n");
		printf("2. Count In Matrix\n");
		printf("3. No Repeatation\n");
		printf("4. Dynamic Array\n");
		printf("5. Difference Between Two Integer Numbers\n");
		printf("0. Exit\n");

		printf("Select an item from the list above: ");

		if (scanf("%d", &select) != 1) {
			printf("***Invalid Input***\n");
			while (getchar() != '\n');
			continue;
		}
		getchar();

		switch (select) {
		case 1:
			unitMatrix();
			printf("--------------------------------------------------------\n");
			break;
		case 2:
			countInMatrix();
			printf("--------------------------------------------------------\n");
			break;
		case 3:
			noRepeat();
			printf("--------------------------------------------------------\n");
			break;
		case 4:
			dynamicArray();
			printf("--------------------------------------------------------\n");
			break;
		case 5:
			difference();
			printf("--------------------------------------------------------\n");
			break;
		case 0:
			printf("\t*** Good Bye ***\n");
			break;
		default:
			printf("*** Invalid selection. Enter a number between 0 and 5.\n");
			break;
		}
	} while (select != 0);


	return 0;
}