#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h.>
#include "core.h"

int main() {

	int select;

	printf("\n");

	do {
		printf("1. Right Aligned Triangle Pattern\n");
		printf("2. Inverted Right Aligned Triangle Pattern\n");
		printf("3. Left Top Hour Glass Pattern- Combination of Both\n");
		printf("0. Exit\n");

		printf("Select a number from the list: ");
		scanf("%d", &select);

		printf("\n");

		switch (select) {
		case 1:
			printf("Right Aligned Triangle...\n\n");
			right_aligned_triangle();
			break;
		case 2:
			printf("Inverted Right Aligned Triangle...\n\n");
			inverted_right_aligned_triangle();
			break;
		case 3:
			printf("Left Top Hour Glass...\n\n");
			left_top_hour_glass();
			break;
		case 0:
			printf("\nExiting...\n\nGood Bye.\n");
			break;
		default:
			printf("\nInvalid number entered.\n");
		}

	} while (select != 0);


}