#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include "core.h"

//summation
void summation() {

	int n, arr[100000];
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	long long int sum = 0;

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}

	printf("Summation = %lld", abs(sum));

}


//search
void search() {
	int N, nums[100], s, foundNum = 0;
	printf("Enter the number of elements: ");
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &nums[i]);
	}

	printf("Enter the number to search: ");
	scanf("%d", &s);

	for (int i = 0; i < N; i++) {
		if (nums[i] == s) {
			printf("%d", i);
			foundNum = 1;
		}
		if (foundNum == 1) {
			break;
		}
	}

	if (foundNum == 0) {
		printf("-1");
	}

}


//Replacement
void replacement() {

	int a[100], n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			printf("1 ");
		}
		else if (a[i] < 0) {
			printf("2 ");
		}
		else {
			printf("%d ", a[i]);
		}
	}

}

//Position in array
void positionInArray() {

	int n, array[100];
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < n; i++) {
		if (array[i] <= 10) {
			printf("A[%d] = %d\n", i, array[i]);
		}
	}
}

//Lowest Position
void lowestPosition() {
	int n, lowArray[50], min, minPosition;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &lowArray[i]);
	}

	min = lowArray[0];
	minPosition = 1;

	for (int i = 1; i < n; i++) {
		if (lowArray[i] < min) {
			min = lowArray[i];
			minPosition = i + 1;
		}
	}
	printf("%d %d", min, minPosition);
}

//Reverse
void reverse() {
	int n, arr[50];
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("\nIn reverse order: ");
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}

//Is an array palindrome or not
void palindrome() {
	int n, arr[20], rev[20], palindrome=0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0, j = n - 1; i < n, j >= 0; i++,j--) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
		rev[j] = arr[i];
		
	}

	for (int i = 0; i < n;i++ ) {
		if (arr[i] == rev[i]) {
			palindrome = 1;
		}
		else {
			palindrome = 0;
			break;
		}
	}

	if (palindrome == 1) {
		printf("\nYes, Palindrome.\n");
	}
	else {
		printf("\nNot Palindrome\n");
	}


}