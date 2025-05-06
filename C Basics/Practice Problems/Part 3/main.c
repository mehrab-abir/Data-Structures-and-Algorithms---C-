#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>

#include "problems.h";

int main() {

	printf("\t*** Practice Day 1 ***\n");
	printf("\t----------------------\n");

	int select;

	do {
		printf("\n");
		printf("1. Count Letters of A String\n");
		printf("2. Count Letters of A Large String- Max Length 10^7\n");
		printf("3. Search A Number In A Matrix\n");
		printf("4. Display Unique Characters In A String\n");
		printf("5. Number of Unique Numbers In An Array of Numbers\n");
		printf("0. Exit\n");

		printf("Select an item from the list above: ");

		if (scanf("%d", &select) != 1) {
			printf("*** Invalid Input ***\n");
			while (getchar() != '\n');
			continue;
		}
		getchar();

		switch (select) {
		case 1:
			countLetters();
			printf("----------------------------------------------------\n");
			break;
		case 2:
			countLettersLarge();
			printf("----------------------------------------------------\n");
			break;
		case 3:
			searchMatrix();
			printf("----------------------------------------------------\n");
			break;
		case 4:
			uniqueChar();
			printf("----------------------------------------------------\n");
			break;
		case 5:
			uniqueNums();
			printf("----------------------------------------------------\n");
			break;
		case 0:
			printf("\n\t+-+-+ Good Bye +-+-+\n");
			break;
		default:
			printf("\n***Invalid selection. Enter a number between 0 and 4.***\n");
			break;
		}

	} while (select != 0);

	return 0;
}