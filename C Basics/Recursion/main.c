#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include "functions.h"

int main() {

	int select;
	
	printf("\t***Recursion Problems***\n");
	
	do {
		printf("\n");
		printf("1.Display numbers from 1 to N\n");
		printf("2.Display numbers from N to 1\n");
		printf("3.Summation of an array N numbers\n");
		printf("4.Summation of an array N numbers- Different approach\n");
		printf("0.Exit\n");

		printf("Select an item from the list above: ");

		if (scanf("%d", &select) != 1) {
			printf("\t### Invalid Input ###\n");
			while (getchar() != '\n');
			continue;
		}

		switch (select) {
		case 1:
			//print 1 to N numbers
			one_to_N();
			printf("-----------------------------------------\n");
			break;
		case 2:
			//print n to 1
			N_to_one();
			printf("-----------------------------------------\n");
			break;
		case 3:
			//summation of an array of N numbers
			sum_N_numbers();
			printf("-----------------------------------------\n");
			break;
		case 4:
			//summation of an array of N numbers- different approach
			sum_numbers();
			printf("-----------------------------------------\n");
			break;
		case 0:
			printf("\t *** Good Bye ***\n");
			break;
		default:
			printf("\t*** Invalid selection. Please, enter a number from 0 to 4. ***\n");
			printf("-----------------------------------------\n");
			break;
		}

	} while (select != 0);
	
	return 0;
}