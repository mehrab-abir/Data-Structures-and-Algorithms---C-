#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#include "problems.h";

//add 2 values- use pointer
void add() {
	int x, y;

	printf("Enter 1st number: ");
	scanf("%d", &x);
	printf("Enter 2nd number: ");
	scanf("%d", &y);

	int* n1, * n2;
	n1 = &x, n2 = &y;

	int sum = *n1 + *n2;
	printf("Summation = %d\n", sum);
}

//swap 2 numbers - using pointer
void swap() {
	int x, y;

	printf("Enter 1st number: ");
	scanf("%d", &x);
	printf("Enter 2nd number: ");
	scanf("%d", &y);

	printf("Before swapping: 1st Number= %d,\t2nd Number= %d\n", x, y);

	int* n1 = &x, * n2 = &y;

	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;

	printf("After swaaping: 1st Number= %d,\t2nd Number= %d\n", x,y);
}

//Min- Max
void minMax() {
	int a, b, c;
	
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	printf("Enter 3rd number: ");
	scanf("%d", &c);

	int* p1 = &a, * p2 =  &b, * p3 = &c;
	int max, min, mid;

	//Maximum
	if ((*p1 >= *p2) && (*p1 >= *p3)) {
		max = *p1;
	}
	else if ((*p2 >= *p1) && (*p2 >= *p3)) {
		max = *p2;
	}
	else {
		max = *p3;
	}


	//minimum
	if ((*p1 <= *p2) && (*p1 <= *p3)) {
		min = *p1;
	}
	else if ((*p2 <= *p1) && (*p2 <= *p3)) {
		min = *p2;
	}
	else {
		min = *p3;
	}

	printf("%d %d\n", min, max);
}

//summation- using dynamic array
void summation() {
	int n;
	
	printf("Number of elements: ");
	scanf("%d", &n);

	int* arr = (int*)malloc(n * sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ",i + 1);
		scanf("%d", &arr[i]);
	}

	printf("\n");

	for (int i = 0; i < n; i++) {
		printf("%d  ", arr[i]);
	}

	int sum = 0;
	int* ptr = arr;

	for (int i = 0; i < n; i++) {
		sum = sum + *ptr;
		ptr++;
	}

	if (sum < 0) {
		printf("\nAbsolute Summation: %d\n", sum * (-1));
	}
	else {
		printf("\nAbsolute Summation: %d\n", sum);
	}

	free(arr);
	arr = NULL;
}

//C. Replacement
void replacement() {

	printf("Replace every positive number by 1, and negative number by 2.\n");
	int n;

	printf("Number of elements: ");
	scanf("%d", &n);

	int* numbers = (int*)malloc(n * sizeof(int));

	if (numbers == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	int* ptr = numbers;

	for (int i = 0; i < n; i++) {
		if (*ptr > 0) {
			*ptr = 1;
		}
		else if(*ptr < 0){
			*ptr = 2;
		}
		ptr++;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	free(numbers);
	numbers = NULL;
}