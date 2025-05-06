#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "core.h"


//right angle tringale 
void right_angle_triangle() {

	int numOfRows;

	printf("Enter the number of rows: ");
	scanf("%d", &numOfRows);

	for (int row = 1; row <= numOfRows; row++) {
		for (int col = 1; col <= row; col++) {
			printf("%d ", col);
			//printf("%d ", row);
			//printf("%d ", col%2);
			//printf("%d ", row%2);
			//printf("%c ", col+64);
			//printf("%c ", row+64);
			//printf("* ");
			//printf("* + ");
			//printf("| ");

		}
		printf("\n");
	}
	printf("\n");
}

//Reverse Right Angle Triangle
void reverse_right_angle_triangle() {
	int numOfRows;

	printf("Enter the number of rows: ");
	scanf("%d", &numOfRows);

	for (int row = numOfRows; row >= 1; row--) {
		for (int col = 1; col <= row; col++) {
			printf("%d ", col);
			//printf("%c-%d", col + 64, col);
			//printf("%d ", row);
			//printf("%d", col%2);
			//printf("%d-%c", col%2,col+64);
			//printf("%d ", row%2);
			//printf("-");
			//printf("%c", col+64);
			//printf("%c ", row+64);
			//printf("* ");
			//printf("* + ");
			//printf("| ");
		}
		printf("\n");
	}
}

//Diamond or Hour Glass Shape- combination of right angle triagle and reverse right angle triangle.
void right_top_hour_glass() {
	int numOfRows;

	printf("Enter the number of rows for the first half: ");
	scanf("%d", &numOfRows);

	for (int row = 1; row <= numOfRows; row++) {
		for (int col = 1; col <= row; col++) {
			printf("%d ", col);
			//printf("+ ");
		}
		printf("\n");
	}
	for (int row = numOfRows-1; row >= 1; row--) {    //int row=numOfRows or int row=numOfRows-1...both works..with a little difference in output
		for (int col = 1; col <= row; col++) {
			printf("%d ", col);
			//printf("+ ");
		}
		printf("\n");
	}
}








