#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>

#include "problems.h";

//count appearence of letters in a string
void countLetters() {
	char str[10000];

	printf("Enter a string(all lowercase): ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}

	int freqSt[26] = { 0 };

	for (int i = 0; str[i] != '\0'; i++) {
		char ch = str[i];
		int index = ch - 'a';
		freqSt[index] = freqSt[index] + 1;
	}

	//counting and displaying letters
	for (int i = 0; i < 26; i++) {
		if (freqSt[i] != 0) {
			printf("%c : %d\n", i + 'a', freqSt[i]);
		}
	}
}

//J. Count letters in a string of max length 10^7
void countLettersLarge() {
	size_t length = 10000000; //10^7

	char* str = (char*)malloc(length + 1); //+1 for the null character

	if (str == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	printf("Enter a string(all lowercase): ");
	fgets(str, length, stdin);


	for (int i = 0; i < length; i++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}
	
	int freq[26] = { 0 };

	//couting frequency
	for (int i = 0; str[i] != '\0'; i++) {
		char ch = str[i];
		int index = ch - 'a';
		freq[index] = freq[index] + 1;
	}

	//displaying the letters
	for (int i = 0; i < 26; i++) {
		if (freq[i] != 0) {
			printf("%c : %d\n", i + 'a', freq[i]);
		}
	}

	//free the allocated memory
	free(str);
}

//Search in matrix
void searchMatrix() {
	int mat[10][10], nRows, nCols, searchX;

	printf("Number of rows: ");
	scanf("%d", &nRows);
	printf("Number of columns: ");
	scanf("%d", &nCols);

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Matrix[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &mat[row][col]);
		}
		printf("\n");
	}

	//displaying the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", mat[row][col]);
		}
		printf("\n");
	}

	printf("\nSearch a number: ");
	scanf("%d", &searchX);

	int found = 0;

	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (mat[row][col] == searchX) {
				found = 1;
				break;
			}
		}
	}

	//final output
	if (found == 1) {
		//printf("Will not take number\n");
		printf("Number found.\n");
	}
	else {
		//printf("Will take number\n");
		printf("Not found.\n");
	}
}

/*Problem Statement : Given a string of length N.Print the unique characters in the string in increasing alphabetical order.*/
void uniqueChar() {
	char word[100];

	printf("Enter a string: ");
	fgets(word, sizeof(word), stdin);

	for (int i = 0; i < sizeof(word); i++) {
		if (word[i] == '\n') {
			word[i] = '\0';
			break;
		}
	}

	int len = strlen(word);

	int freq[26] = { 0 };

	for (int i = 0; i < len; i++) {
		char ch = word[i];
		int index = ch - 'a';
		freq[index] = 1;
	}

	//displaying unique characters
	for (int i = 0; i < 26; i++) {
		if (freq[i] == 1) {
			printf("%c", i + 'a'); // index = ch - 'a' => ch = index + 'a', here index is i for this loop
		}
	}
	printf("\n");
}

/*Problem Statement: Given an integer N (1 <= N <= 10^5) and an array of N numbers (1 <= A[i] <= 10^5). Print how many unique numbers are in the array.*/
void uniqueNums() {
	int numbers[10000], n, uniqueNum = 0;

	printf("Number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	int freq[10000] = { 0 };

	for (int i = 0; i < n; i++) {
		freq[numbers[i]] = 1;
	}

	//counting unique numbers
	for (int i = 0; i < 10000; i++) {
		if (freq[i] == 1) {
			uniqueNum++;
		}
	}

	//final output
	printf("Number of unique numbers: %d\n", uniqueNum);
}