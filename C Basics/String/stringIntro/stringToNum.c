#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "functions.h"

void intro() {
	char str[20] = "There is a \\ slash";
	printf("%s\n", str);

	char sports[20];
	printf("Enter a sports name: ");
	scanf("%s", &sports);

	printf("%s\n", sports);

	char fname[30], lname[30];
	int num = 1;

	printf("Enter first name: ");
	fgets(fname, sizeof(fname), stdin);

	for (int i = 0; i < sizeof(fname); i++) {
		if (fname[i] == '\n') {
			fname[i] = '\0';
			break;
		}
	}

	printf("Enter last name: ");
	fgets(lname, sizeof(lname), stdin);

	for (int i = 0; i < sizeof(lname); i++) {
		if (lname[i] == '\n') {
			lname[i] = '\0';
			break;
		}
	}

	printf("First name: %s %d\n", fname, num); //printf is preferred
	printf("Last name: %s", lname);
	//fputs(lname, stdout);
}

void strToNum() {
	char strNum[20];
	int length = 0;

	printf("Enter a number- (taken as string): ");
	fgets(strNum, sizeof(strNum), stdin); 										
	//gets(strNum); does not count newline character

	// counts newline character, so we need to replace the newline character with a null character	
	for (int i = 0; i < sizeof(strNum); i++) {
		if (strNum[i] == '\n') {
			strNum[i] = '\0';
			break;
		}
	}

	for (int i = 0; strNum[i] != '\0'; i++) {
		length++;
	}

	//printf("Length = %d", length);

	//coverting the number(string) to an integer number
	int num = 0;
	for (int i = 0; i < length; i++) {
		int digit = strNum[i] - '0'; //ascii value 48 will be minus to get the number
		num = num * 10 + digit;
	}

	printf("Converted to integer number= %d\n", num);

	int n;
	printf("\nEnter an integer number to add to this number: ");
	scanf("%d", &n);

	printf("After addition: %d", num + n);
}