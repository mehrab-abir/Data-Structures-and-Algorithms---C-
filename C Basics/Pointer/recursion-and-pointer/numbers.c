#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#include "numbers.h"
#include "mainMenu.h"

//square - called from arrayOperations function
void square(int *numbers, int arrySize) {
	printf("Square of these numbers: \n");
	for (int i = 0; i < arrySize; i++) {
		printf("%d\t", *(numbers + i) * *(numbers + i)); //using pointer dereferencing
	}
	printf("\n");
}

//summation - called from arrayOperations function
void sum(int numbers[], int arrySize) { 
	int sum = 0;
	for (int i = 0; i < arrySize; i++) {
		sum = sum + numbers[i]; //using array index
	}

	printf("Summation of all numbers: %d\n", sum);
}

//array operations - called from arrayOfNumbers() function
void arrayOperations(int numbers[], int arrySize) {  

	printf("\n\t***Array Operations***\n");
	int select;

	do {
		printf("\n");
		printf("1. Summation of the numbers\n");
		printf("2. Square of the numbers\n");
		printf("3. Back to Previous Menu\n");
		printf("4. Back to Main Menu\n");

		printf("Select an item from the list above: ");
		if (scanf("%d", &select) != 1) {
			printf("Invalid Input.\n");
			while (getchar() != '\n');
			continue;
		}

		switch (select) {
		case 1:
			sum(numbers, arrySize);
			printf("++++++++++++++++++++++++++++++++++++++++\n");
			break;
		case 2:
			square(numbers, arrySize);
			printf("++++++++++++++++++++++++++++++++++++++++\n");
			break;
		case 3:
			break;
		case 4:
			startMenu();
			printf("++++++++++++++++++++++++++++++++++++++++\n");
			break;
		default:
			printf("Invalid Selection. Enter a Number from 1 to 4\n");
			break;
		}

	} while (select != 3);

}
//array of numbers- called from numbers function
void arrayOfNumbers() {  

	printf("\n\t***Take input for array, Integer numbers only***\n");
	int arr[1000], n;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ",i + 1);
		scanf("%d", &arr[i]);
	}

	arrayOperations(arr,n);
}


//factorial - called from findFactorial function 
long long factorial(int num) {          
	if (num == 0) {
		return 1;
	}

	return num * factorial(num - 1);
}

//starter code for factorial- called from numbers function
void findFactorial() {
	int num;
	printf("Enter a number to find factorial: ");
	scanf("%d", &num);

	long long fact = factorial(num);   //see line 52
	printf("Factorial of this number: %lld\n", fact);
}

//getDigit- called from printDigits function
void getDigit(int n) {
	if (n == 0) {
		return;
	}

	int digit = n % 10;
	getDigit(n / 10);

	printf("%d ", digit);
}

//print digits- called from numbers functions
void printDigits() {
	int testCase, n;
	printf("Number of test cases: ");
	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		printf("Enter a number: ");
		scanf("%d", &n);

		if (n == 0) {
			printf("0");
		}
		else {
			getDigit(n);  //see line 71
			printf("\n");
		}
		
	}
}

//checking if palindrom or not--called from palindromArray() function
int isPalindrom(int *numArr, int i, int j) {

	if (i > j) {
		return 1;
	}
	return numArr[i] == numArr[j] && isPalindrom(numArr, i + 1, j - 1);
}


//Palindrom array - called from numbers() function
void palindromArray() {
	int n, nums[50];
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &nums[i]);
	}

	if (isPalindrom(nums, 0, n - 1)) {   //0 for first index of the array, n-1 for last index
		printf("Yes, Palindrome\n");
	}
	else {
		printf("Not Palindrome\n");
	}
}


//starter code- called from main function
void numbers() {

	int select;

	printf("\n");

	do {
		printf("\n");
		printf("\t1. Array operation\n");
		printf("\t2. Factorial of a number\n");
		printf("\t3. Print all digits of a number\n");
		printf("\t4. Palindrom array\n");
		printf("\t5. Back to Main Menu\n");

		printf("Select an item from the list above: ");

		if (scanf("%d", &select) != 1) {
			printf("Invalid Input\n");
			while (getchar() != '\n');
			continue;
		}
		getchar();

		switch (select) {
		case 1:
			arrayOfNumbers();
			printf("------------------------------------------------------\n");
			break;
		case 2:
			findFactorial();
			printf("------------------------------------------------------\n");
			break;
		case 3:
			printDigits();
			printf("------------------------------------------------------\n");
			break;
		case 4:
			palindromArray();
			printf("------------------------------------------------------\n");
			break;
		case 5:
			//back to main menu
			startMenu();
			printf("------------------------------------------------------\n");
			break;
		default:
			printf("Invalid selection. Enter a number from 1 to 5.\n");
			printf("------------------------------------------------------\n");
			break;
		}


	} while (select != 5);

}