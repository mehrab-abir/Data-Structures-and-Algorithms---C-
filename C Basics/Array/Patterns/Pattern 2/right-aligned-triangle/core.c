#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "core.h"

//Right Aligned triangle- see output after the code
void right_aligned_triangle() {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n - row; col++) {
			printf(" ");
		}

		for (int col = 1; col <= row; col++) {
			printf("*");
		}
		printf("\n");
	}
}
/*
	 *
	**
   ***
  ****
 *****
******

*/

//Inverted Right Aligned Triangle
void inverted_right_aligned_triangle() {

	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (int row = n; row >= 1; row--) {
		for (int col = 1; col <= n - row; col++) {
			printf(" ");
		}
		for (int col = 1; col <= row; col++) {
			printf("*");
		}
		printf("\n");
	}
}

//Left Top Hour Glass
void left_top_hour_glass() {

	int n;
	printf("Enter the number of rows for the first half: ");
	scanf("%d", &n);

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n - row; col++) {
			printf(" ");
		}
		for (int col = 1; col <= row; col++) {
			printf("*"); //there will be no space here, otherwise out will be different-(diamond shape)
		}
		printf("\n");
	}

	for (int row = n; row >= 1; row--) {
		for (int col = 1; col <= n - row; col++) {
			printf(" ");
		}
		for (int col = 1; col <= row; col++) {
			printf("*"); //there will be no space here, otherwise out will be different-(diamond shape)
		}
		printf("\n");
	}
}
