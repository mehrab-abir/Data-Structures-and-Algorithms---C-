#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#include "string.h"

//length of a string
int stringLength(char str[]) { //receives as string- character array
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}
	printf("Length of the string is: %d\n", length);

	return length;
}

//number of letters in a string
void countCharacters(char* str, int length) { //receives using pointer
	int whiteSpace = 0, characters, numbers = 0;

	for (int i = 0; i < length; i++) {
		if (str[i] == ' ') {
			whiteSpace++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			numbers++;
		}
	}

	characters = length - whiteSpace-numbers;

	printf("Number of letters = %d\n",characters);
}

//number of vowels in string
void countVowels(char* str, int length) { //receives using pointer
	int vowels = 0;

	for (int i = 0; i < length; i++) {
		str[i] = tolower(str[i]);
	}

	for (int i = 0; i < length; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			vowels++;
		}
	}

	printf("Number of vowels: %d\n", vowels);
}

//string er info
void stringErInfo(char *str) { //called from string function
	int strLen = stringLength(str);
	countCharacters(str, strLen);
	countVowels(str, strLen);
}

//string- starter code, called from main function
void string() {
	char str[50];

	printf("Type anything: ");
	fgets(str, sizeof(str), stdin);

	//remove newline charater if exists
	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}

	stringErInfo(str);
}