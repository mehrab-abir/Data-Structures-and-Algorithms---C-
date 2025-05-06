#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "core.h"


int main() {

	int select;

	printf("\n");


	do {

        printf("1. Right Angle Triangle Pattern\n");
        printf("2. Reverse Right Angle Triangle Pattern\n");
        printf("3. Right Top Hour Glass Pattern- Combination of Both\n");
        printf("0. Exit\n");


		printf("Enter a number to select from the list - 0 to exit: ");
		scanf("%d", &select);

		printf("\n");

		switch (select) {
		case 1:
			printf("Right Angle Triangle...\n\n");
			right_angle_triangle();
			break;
		case 2:
			printf("Reverse Right Angle Triangle...\n\n");
			reverse_right_angle_triangle();
			break;
		case 3:
			printf("Combination of Right Angle Triangle and Reverse Right Angle Triangle...\n\n");
			right_top_hour_glass();
			break;
		case 0:
			printf("\n\nExiting...\n\nGood Bye.\n\n");
			break;
		default:
			printf("\nInvalid input.\n");
		}

	} while (select != 0);




	return 0;
}
