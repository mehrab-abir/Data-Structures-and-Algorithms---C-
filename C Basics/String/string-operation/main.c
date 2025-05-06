#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#include "string_operation.h"

int main() {

	printf("Hey!");

	int select;
	char str[50];
	int length = 0;

	do {
		puts("\n");

		printf("1. Length of a string\n");
		printf("2. Copy a string\n");
		printf("3. String concatenation\n");
		printf("4. String compare\n");
		printf("5. String reverse\n");
		printf("0. Exit\n");

		printf("Select an item from the list: ");
		
		if (scanf("%d", &select) != 1) {
			printf("\nInvalid Input\n");
			while (getchar() != '\n');
			continue;
		}
		getchar();

		switch (select) {
		case 1:
			strlength();
			printf("\n-----------------------------------------------------");
			break;
		case 2:
			strCopy();
			printf("\n-----------------------------------------------------");
			break;
		case 3:
			strConcat();
			printf("\n-----------------------------------------------------");
			break;
		case 4:
			strCmp();
			printf("\n-----------------------------------------------------");
			break;
		case 5:
			strRev();
			printf("\n-----------------------------------------------------");
			break;
		case 0:
			printf("\n\nGood Bye.\n");
			break;
		default:
			printf("Please, Enter a number between 0 and 9.\n");
			break;
		}


	} while (select != 0);

	return 0;
}