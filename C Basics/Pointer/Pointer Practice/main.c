#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#include "problems.h";

int main() {
	
	printf("\t*** Practice Day 2 ***\n");
	printf("\t----------------------\n");

	int select;

	do {
		printf("\n");
		printf("1. Add 2 numbers\n");
		printf("2. Swap 2 numbers\n");
		printf("3. Min Max \n");
		printf("4. Summation of some integer numbers \n");
		printf("5. Replacement\n");
		printf("0. Exit\n");

		printf("Select an item from the list above: ");

		if (scanf("%d", &select) != 1) {
			printf("___Invalid Input___\n");
			while (getchar() == '\n');
			continue;
		}
		getchar();

		switch (select) {
		case 1:
			add();
			printf("-------------------------------------------------------------\n");
			break;
		case 2:
			swap();
			printf("-------------------------------------------------------------\n");
			break;
		case 3:
			minMax();
			printf("-------------------------------------------------------------\n");
			break;
		case 4:
			summation();
			printf("-------------------------------------------------------------\n");
			break;
		case 5:
			replacement();
			printf("-------------------------------------------------------------\n");
			break;
		case 0:
			printf("\t+-+-+ Good Bye +-+-+\n");
			break;
		default:
			printf("***Invalid Selection. Enter a number between 0 and 5***\n");
			break;
		}


	} while (select != 0);

	return 0;
}