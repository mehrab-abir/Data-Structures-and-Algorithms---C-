#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "core.h"

//Triangle
void triangle() {
	printf("Triangle...\n\n");

	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (int row = 1; row <= n; row++) { // if we write, row=row+2, that will also be a triangle, with odd number of stars in each line..like 1,3,5,7,9... etc.
		for (int col = 1; col <= n - row; col++) {
			printf(" "); //there will be only one space, otherwise output will be different
		}

		for (int col = 1; col <= row; col++) {
			printf("* "); //this space after the '^' is important to make a triangle
		}
		printf("\n");
	}
}



//Inverted Triangle
void inverted_triangle() {
	printf("Inverted Triangle...\n\n");

	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (int row = n; row >= 1; row--) {
		for (int col = 1; col <= n - row; col++) {
			printf(" "); //there will be only one space, otherwise output will be different
		}
		for (int col = 1; col <= row; col++) {
			printf("* "); //this space after the '*' is important
		}
		printf("\n");
	}
}

//Diamond
void diamond() {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n - row; col++) {
			printf(" "); //there will be only one space, otherwise output will be different
		}

		for (int col = 1; col <= row; col++) {
			printf("* "); //this space after the '^' is important to make a triangle
		}
		printf("\n");
	}
	for (int row = n-1; row >= 1; row--) {
		for (int col = 1; col <= n - row; col++) {
			printf(" "); //there will be only one space, otherwise output will be different
		}
		for (int col = 1; col <= row; col++) {
			printf("* "); //this space after the '*' is important
		}
		printf("\n");
	}

}
