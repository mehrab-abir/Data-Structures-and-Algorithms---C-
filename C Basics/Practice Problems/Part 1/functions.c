#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include "functions.h"


//way too lone string
void tooLong() {
	int t;
	printf("Enter the number of test cases: ");
	scanf("%d", &t);
	getchar();

	for (int i = 0; i < t; i++) {
		int length = 0;
		char str[10000];

		printf("Enter string %d: ", i + 1);
		fgets(str, sizeof(str), stdin);

		while (str[length] != '\0') {
			if (str[length] == '\n') {
				str[length] = '\0';
				break;
			}
			length++;
		}
		if (length > 10) {
			printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
		}
		else {
			printf("%s\n", str);
		}
	}
}

//conversion
void conversion() {
	char str[100000];

	printf("Enter a string (include comma, uppercase and lowercase): ");
	fgets(str, sizeof(str), stdin);

	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == ',') {
			str[i] = ' ';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}

		i++;
	}
	fputs(str, stdout);
}

//Palindrom string
void palindromStr() {
	char str1[10000], str2[10000];

	printf("Enter a string: ");
	scanf("%s", str1);

	int length = 0;

	for (int i = 0; str1[i] != '\0'; i++) {
		length++;
	}

	for(int i=0,j=length-1;i<length, j>=0;i++,j--){
		str2[j] = str1[i];
	}

	str2[length] = '\0'; 
	printf("\nAfter reversing: %s\n", str2);

	int palindrom = 0;

	for (int i = 0; i < length; i++) {
		if (str1[i] == str2[i]) {
			palindrom = 1;
		}
		else {
			palindrom = 0;
			break;
		}
	}

	if (palindrom == 1) {
		printf("YES, Palindrom");
	}
	else {
		printf("NOT Palindrom");
	}
}

//D. strings- length, concatenation, swap first characters
void stringManip() {
	char strA[100], strB[100];

	printf("Enter string A: ");
	scanf("%s", strA);
	//fgets(strA, sizeof(strA), stdin); //both works

	//to remove the newline character and replace it with null character, only use if it's needed
	/*for (int i = 0; i < sizeof(strA); i++) {
		if (strA[i] == '\n') {
			strA[i] = '\0';
			break;
		}
	}*/

	printf("Enter string B: ");
	scanf("%s", strB);

	//to remove the newline character and replace it with null character, only use if it's needed
	/*for (int i = 0; i < sizeof(strB); i++) {
		if (strB[i] == '\n') {
			strB[i] = '\0';
			break;
		}
	}*/

	int i=0,j=0,lengthA=0, lengthB = 0;
	
	while (strA[i] != '\0') {
		lengthA++;
		i++;
	}
	while (strB[j] != '\0') {
		lengthB++;
		j++;
	}

	printf("%d %d\n", lengthA, lengthB);
	printf("%s%s\n", strA, strB);
	char temp = strA[0];
	strA[0] = strB[0];
	strB[0] = temp;
	printf("%s %s", strA, strB);
}