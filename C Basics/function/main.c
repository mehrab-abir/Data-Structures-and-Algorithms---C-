#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include "functions.h"

int main() {

	int num1, num2;
	int number1, number2;

	printf("\t***Summation of 2 numbers without pointers***\n");
	printf("Enter number 1: ");
	scanf("%d", &num1);

	printf("Enter number 2: ");
	scanf("%d", &num2);

	printf("\n");
	printf("In the main function:\n");
	printf("Address of %d: %d\n", num1, &num1);
	printf("Address of %d: %d\n", num2, &num2);

	int result = addbyCopy(num1, num2);

	printf("Summation = %d\n", result);

	printf("\n\t***Summation of 2 numbers using pointers***\n");
	printf("Enter number 1: ");
	scanf("%d", &number1);

	printf("Enter number 2: ");
	scanf("%d", &number2);

	printf("In the main function:\n");
	printf("Address of %d: %d\n", number1, &number1);
	printf("Address of %d: %d\n", number2, &number2);

	int resultP = addbyRef(&number1, &number2);
	printf("SummationP = %d\n", resultP);

	return 0;
}