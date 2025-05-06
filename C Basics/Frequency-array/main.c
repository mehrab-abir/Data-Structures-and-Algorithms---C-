#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include "frequency_array.h"

int main() {
	int select;

	printf("\t***Frequency Array Problems***\n");
	printf("-------------------------------------\n");
	
	do {

		printf("\n");

		printf("1. Counting repetation using only loop\n");
		printf("2. Search a number using frequency array\n");
		printf("3. Search multiple numbers using frequency array\n");
		printf("4. Unique characters in a string\n");
		printf("5. Counting repetation of numbers using frequency array\n");
		printf("0. Exit\n");

		printf("Select from the list above: ");

		if (scanf("%d", &select) != 1) {
			printf("\nInvalid Input\n");
			while (getchar() == '\n');
			continue;
		}
		getchar();

		switch (select) {
		case 1: 
			freq_array();
			break;
		case 2:
			searchNum();
			break;
		case 3:
			searchNumbers();
			break;
		case 4:
			uniqueCh();
			break;
		case 5:
			numAppear();
			break;
		case 0:
			printf("\n\t+-+-+ Good Bye. +-+-+\n");
			break;
		default:
			printf("Invalid number typed. Enter 0 or 1 only.\n");
			break;
		}

	} while (select != 0);
	


	return 0;
}