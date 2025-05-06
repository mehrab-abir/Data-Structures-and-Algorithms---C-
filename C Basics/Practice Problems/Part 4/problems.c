#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#include "problems.h"

//Do It
void numTable() {
	int n, k;
	printf("Enter the value for n: ");
	scanf("%d", &n);
	printf("Enter the value for k: ");
	scanf("%d", &k);

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}

//Book reading
void bookReading() {
	int n, books[100];
	long t;

	printf("How many books: ");
	scanf("%d", &n);

	printf("Time given: ");
	scanf("%ld", &t);

	for (int i = 0; i < n; i++) {
		printf("Time needed for book %d: ", i + 1);
		scanf("%d", &books[i]);
	}

	int sum = 0, count = 0;

	for (int i = 0; i < n; i++) {
		if (sum + books[i] > t) {
			break;
		}
		else {
			sum = sum + books[i];
			count++;
		}
	}

	printf("Number of books can be read: %d\n", count);

}

//Price range
void priceRange() {
	int n;
	long x, y, prices[100];

	printf("Number of phones: ");
	scanf("%d", &n);

	printf("Lower range: ");
	scanf("%ld", &x);
	printf("Upper range: ");
	scanf("%ld", &y);

	for (int i = 0; i < n; i++) {
		printf("Price %d: ", i + 1);
		scanf("%ld", &prices[i]);
	}

	int countPhones = 0;

	for (int i = 0; i < n; i++) {
		if (prices[i] >= x && prices[i] <= y) {
			countPhones++;
		}
	}

	printf("Number of phones can be bought: %d", countPhones);
}

//Job Application
void jobApplication() {
	int n, exp[100];

	printf("Number of candidates: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Experience of candidate %d: ", i + 1);
		scanf("%d", &exp[i]);
	}

	for (int i = 0; i < n; i++) {
		if (exp[i] < 1) {
			printf("Entry-level candidate\n");
		}
		if (exp[i] >= 1 && exp[i] <= 3) {
			printf("Junior candidate\n");
		}
		if (exp[i] >= 4 && exp[i] <= 7) {
			printf("Mid-level candidate\n");
		}
		if (exp[i] > 7) {
			printf("Senior candidate\n");
		}
	}
}

//lexic Min Max word
void lexicWord() {
	char word1[1010], word2[1010], word3[1010], large[1010], small[1010];

	printf("First word: ");
	scanf("%s", word1);
	printf("Second word: ");
	scanf("%s", word2);
	printf("Third word: ");
	scanf("%s", word3);

	//finding smallest one
	if (strcmp(word1, word2) < 0){
		if (strcmp(word1, word3) < 0) {
			strcpy(small, word1);
		}
		else {
			strcpy(small, word3);
		}
	}
	else {
		if (strcmp(word2, word3) < 0) {
			strcpy(small, word2);
		}
		else {
			strcpy(small, word3);
		}
	}

	//finding biggest one
	if (strcmp(word1, word2) > 0) {
		if (strcmp(word1, word3) > 0) {
			strcpy(large,word1);
		}
		else {
			strcpy(large, word3);
		}
	}
	else {
		if (strcmp(word2, word3) > 0) {
			strcpy(large, word2);
		}
		else {
			strcpy(large, word3);
		}
	}

	printf("Small: %s\n", small);
	printf("Large: %s\n", large);
}