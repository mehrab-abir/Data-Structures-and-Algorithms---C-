#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include "functions.h"

//swap code starts
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapTwoNums() {
	int a, b;

	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);

	swap(&a, &b);

	printf("After swapping: %d %d\n", a, b);
}
////swap code ends


//print a sentence starts
void printRecursion(int n, int i) {
	if (i > n) {
		return;
	}
	printf("I love recursion\n");
	printRecursion(n, i + 1);
}
void printSentence() {
	int n;
	printf("Number of times to be printed: ");
	scanf("%d", &n);

	printRecursion(n,1);
}
//print a sentence ends

//print 1 to N starts
void oneToN(int i, int n) {
	if (i > n) {
		return;
	}
	printf("%d ", i);
	oneToN(i + 1, n);
}

void printNumbers() {
	int limit;
	printf("How many numbers to print: ");
	scanf("%d", &limit);

	oneToN(1, limit);
}
//print 1 to N ends


//print N to 1
void nToOne(int start) {
	if (start == 1) {
		printf("%d", start);
	}
	else {
		printf("%d ", start);
		nToOne(start - 1);
	}
}
void printNumbersRev() {
	int start;
	printf("Enter the value of N: ");
	scanf("%d", &start);

	nToOne(start);
}