#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#include "string.h"
#include "numbers.h"
#include "mainMenu.h"

void startMenu() {
	printf("\n\t***Recursion and Pointer***\n");
	int select;

	do {
		printf("\n");
		printf("1. Numbers\n");
		printf("2. String\n");
		printf("0. Exit\n");

		printf("Select an item from the list above: ");

		if (scanf("%d", &select) != 1) {
			printf("Invalid Input. Enter a number from 0 to 2.\n");
			while (getchar() != '\n');
			continue;
		}
		getchar();

		switch (select) {
		case 1:
			numbers();
			printf("*******************************************************\n");
			break;
		case 2:
			string();
			printf("*******************************************************\n");
			break;
		case 0:
			printf("Good bye\n");
			exit(1);
		default:
			printf("Invalid Selection. Enter a Number From 0 to 2.\n");
			break;
		}

	} while (select != 0);
}
