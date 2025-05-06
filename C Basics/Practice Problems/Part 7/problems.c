#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#include "problems.h";

void unitMatrix() {
	printf("\n");

	int matrix[100][100], nRows, nCols;

	printf("Number of rows: ");
	scanf("%d", &nRows);

	nCols = nRows;

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Matrix[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &matrix[row][col]);
		}
		printf("\n");
	}

	//display matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", matrix[row][col]);
		}
		printf("\n");
	}

	int firstElement = 1;
	int unit = 1;

	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (row == col) {
				if (matrix[row][col] != firstElement) {
					unit = 0;
					break;
				}
			}
			else {
				if (matrix[row][col] != 0) {
					unit = 0;
					break;
				}
			}
		}
	}

	printf("\n");

	if (unit == 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
}

//count in matrix
/*You will be given a 2D matrix of N * M size. You will also be given X numbers. For each of the Number you have to print how many times the Number have appeared in the matrix.*/
void countInMatrix() {
	printf("\n");

	int matrix[50][50], nRows, nCols, X, search[1000];

	printf("Number of rows: ");
	scanf("%d", &nRows);
	printf("Number of columns: ");
	scanf("%d", &nCols);

	printf("Number of elements to search: ");
	scanf("%d", &X);

	//input for matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Matrix[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &matrix[row][col]);
		}
		printf("\n");
	}

	//input numbers to search
	for (int i = 0; i < X; i++) {
		printf("Enter number %d: ",i + 1);
		scanf("%d", &search[i]);
	}

	//display matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", matrix[row][col]);
		}
		printf("\n");
	}

	int freq[1005] = {0};

	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			int index = matrix[row][col];
			freq[index] = freq[index] + 1;
		}
	}

	printf("\n");
	for (int i = 0; i < X;i++) {
		int num = search[i];
		printf("%d >> %d\n", search[i], freq[num]);
	}
}

//No Repeatation
/*You will be given an Array of N integers, print the count of numbers that have appeared only once.*/
void noRepeat() {
	printf("\n");

	int numbers[100000], n;

	printf("Number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	int freq[100005] = { 0 };

	for (int i = 0; i < n; i++) {
		int index = numbers[i];
		freq[index]++;
	}

	int once = 0;

	for (int i = 0; i < 100005; i++) {
		if (freq[i] == 1) {
			once++;
		}
	}

	printf("%d numbers appeared only once.\n",once);
}

//dynamic array
/*You will be given N integer Numbers.

You will initialy declare an array with length 1.

After taking input of each numbers you will insert the number in the end and increase the array length by one.

Finally, print all N numbers in the array in a single line, separated by spaces.*/

void dynamicArray() {
	printf("\n");

	int length = 1, n;

	printf("Number of elements: ");
	scanf("%d", &n);

	int *arr = (int*)malloc(length * sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
		length++;
		arr = (int*)realloc(arr, length * sizeof(int));
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
}

//Difference between two integer numbers using pointers
void difference() {
	printf("\n");

	int A, B;

	printf("Enter first number: ");
	scanf("%d", &A);
	printf("Enter second number: ");
	scanf("%d", &B);

	int* ptrA = &A, * ptrB = &B;

	int diff;

	if (*ptrA > *ptrB) {
		diff = *ptrA - *ptrB;
	}
	else {
		diff = *ptrB - *ptrA;
	}

	printf("Difference = %d\n", diff);
}
