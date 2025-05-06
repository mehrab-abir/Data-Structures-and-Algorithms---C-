#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include "functions.h"

int main() {

	printf("**** 2D Array Operations ****\n");
	printf("------------------------------\n");

	int select;

	do {
		printf("\n");

		printf("1. Add 2 Matrices\n");
		printf("2. Summation of the diagonal values of a square matrix\n");
		printf("3. Summation of the secondary/minor diagonal values of a square matrix\n");
		printf("4. Absolute difference between the summation of primary and secondary diagonal values\n");
		printf("5. Summation of the values of the lower triangle of a square matrix\n");
		printf("6. Summation of the values of the upper triangle of a square matrix\n");
		printf("7. Summation of row elements of a matrix\n");
		printf("8. Transpose matrix\n");
		printf("9. Scaler matrix\n");
		printf("0. Exit\n");

		printf("Select an item from the list above: ");

		if (scanf("%d", &select) != 1) {
			printf("***Invalid Input.***\n");
			while (getchar() == '\n');
			continue;
		}


		switch (select) {
		case 1:
			matrixAddition();
			printf("-------------------------------------------------------------------");
			break;
		case 2:
			diagonalAddition();
			printf("-------------------------------------------------------------------");
			break;
		case 3:
			minorDiagonalAddition();
			printf("-------------------------------------------------------------------");
			break;
		case 4: 
			diagonalDiff();;
			printf("-------------------------------------------------------------------");
			break;
		case 5:
			lowerTriangleAddition();
			printf("-------------------------------------------------------------------");
			break;
		case 6:
			upperTriangleAddition();
			printf("-------------------------------------------------------------------");
			break;
		case 7:
			addRowElements();
			printf("-------------------------------------------------------------------");
			break;
		case 8:
			transposeMatrix();
			printf("-------------------------------------------------------------------");
			break;
		case 9:
			isScaler();
			printf("-------------------------------------------------------------------");
			break;
		case 0:
			printf("\n\t*** Good Bye ***\n");
			break;
		default:
			printf("\n***Invalid selection. Enter a number between 0 and 9.***\n");
			break;
		}
	} while (select != 0);

	return 0;
}