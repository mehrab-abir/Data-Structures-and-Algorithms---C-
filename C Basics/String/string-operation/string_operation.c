#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#include "string_operation.h"

//String length
void strlength() {
	char str[50], str2[50];
	int length = 0;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	//removing newline character and replacing it with null character, it is needed while finding length
	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}

	//Manual way
	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}
	printf("Length (Manual)= %d\n", length);

	//using library function
	printf("Enter another string: ");
	fgets(str2, sizeof(str2), stdin);

	//removing newline character and replacing it with null character
	for (int i = 0; i < sizeof(str2); i++) {
		if (str2[i] == '\n') {
			str2[i] = '\0';
		}
	}

	int length2 = strlen(str2);
	printf("Length (using library): %d\n", length2);
}

//copy a string
void strCopy() {
	char source[50],dest[50];
	char strA[50], strB[50];

	//manual way
	printf("Enter a string: ");
	fgets(strA, sizeof(strA), stdin);

	int lengthA = strlen(strA);

	for (int i = 0; i < lengthA; i++) {
		strB[i] = strA[i];
	}
	strB[lengthA] = '\0';

	puts("\n");

	printf("String strA: %s", strA);
	printf("String strB: %s\n", strB);

	//using librray function
	printf("\nUsing library function:\n");
	printf("Enter another string: ");
	fgets(source, sizeof(source), stdin);

	//string copy library function
	strcpy(dest, source); //1st argument is destination string, 2nd argument is source string

	puts("\n");
	printf("Source string: %s", source);
	printf("After copying:\nDestination string: %s\n", dest);
}

//string concatenation
void strConcat() {
	char strA[100], strB[100];

	printf("Enter a string: ");
	fgets(strA, sizeof(strA), stdin);

	for (int i = 0; i < sizeof(strA); i++) {
		if (strA[i] == '\n') {
			strA[i] = '\0';
		}
	}

	printf("Enter another string: ");
	fgets(strB, sizeof(strB), stdin);

	int lengthA = strlen(strA);
	int lengthB = strlen(strB);

	int total_length = lengthA + lengthB;

	for (int i = lengthA, j = 0; i < total_length; i++, j++) {
		strA[i] = strB[j];
	}
	
	strA[total_length] = '\0';

	printf("After concatenation: %s\n", strA);
	printf("2nd String: %s\n", strB);

	//using library function
	char fname[50], lname[50];

	printf("Enter first name: ");
	fgets(fname, sizeof(fname), stdin);

	//to remove the newline character that is at the end, replacing it with a null character
	for (int i = 0; i < sizeof(fname); i++) {
		if (fname[i] == '\n') {
			fname[i] = '\0';
			break;
		}
	}

	printf("Enter last name: ");
	fgets(lname, sizeof(lname), stdin);

	strcat(strcat(fname, " "),lname);
	

	printf("Using library function: \n");
	printf("After concatenation: %s\n", fname);
 }


//string comparison
void strCmp() {
	char word1[30], word2[30];

	printf("Enter word 1: ");
	fgets(word1, sizeof(word1), stdin);

	//to remove the newline character that is at the end, replacing it with a null character
	for (int i = 0; i < sizeof(word1); i++) {
		if (word1[i] == '\n') {
			word1[i] = '\0';
		}
	}

	printf("Enter word 2: ");
	fgets(word2, sizeof(word2), stdin);

	//to remove the newline character that is at the end, replacing it with a null character
	for (int i = 0; i < sizeof(word2); i++) {
		if (word2[i] == '\n') {
			word2[i] = '\0';
		}
	}

	int cmp = strcmp(word1, word2);

	if (cmp > 0) {
		printf("word2 is lexicographically smaller than word1\m");
		printf("%s\n%s", word2, word1); //word2 is lexicographically smaller than word1
	}
	else if (cmp < 0) {					//word1 is lexicographically smaller than word1
		printf("word1 is lexicographically smaller than word1\n");
		printf("%s\n%s", word1, word2);
	}
	else {
		printf("%s %s - Both are the same word.\n", word1, word2);
	}
}

//string reverse
void strRev() {
	char str[50];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}

	int len = strlen(str);

	for (int i = 0, j = len-1; i <= j; i++, j--) { //note the condition , i>=j, the loop will continue till the middle of the string
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	printf("After reversing: %s\n", str);
}