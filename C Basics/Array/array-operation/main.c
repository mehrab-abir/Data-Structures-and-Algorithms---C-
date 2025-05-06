#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "functions.h"

int main() {
	int select;
	printf("Hey, Welcome!");

	do {
		printf("\n\n");

		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Reverse\n");
		printf("4. Array reverse using single array \n");
		printf("0. Exit\n");

		printf("Select an item from the list: ");
		scanf("%d", &select);

		switch (select) {
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			reverse();
			break;
		case 4:
			reverse2();
			break;
		case 0:
			printf("\nGood bye.");
			break;
		default:
			printf("Invalid Input.\n");
			break;
		}

	}while (select != 0);


	return 0;
}