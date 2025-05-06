#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#include "function.h"

//C. Compare
void compare() {
	char A[30], B[30];

	printf("Enter a string: ");
	scanf("%s", A);
	printf("Enter another string: ");
	scanf("%s", B);

	int cmp = strcmp(A, B);

	if (cmp > 0) {
		printf("%s", B);
	}
	else if (cmp < 0) {
		printf("%s", A);
	}
	else {
		printf("%s", A);
	}

}


//E. Count
void count() {
	char str[100];
	int sum = 0;
	
	printf("Enter a number (taken as string): ");
	scanf("%s", str);

	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		int digit = str[i] - '0'; //convert character to intger number
		sum = sum + digit;
	}

	printf("Summation of its' digits: %d\n", sum);
}

//K. I love strings
void iLoveString() {
	char s[100], t[100];

	printf("Enter first string: ");
	scanf("%s", s);

	printf("Enter second string: ");
	scanf("%s", t);

	int lenS = strlen(s);
	int lenT = strlen(t);

	
}