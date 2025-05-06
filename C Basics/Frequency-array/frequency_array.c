#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include "frequency_array.h"

void freq_array() {   //frequency array has not been used in this function, see the other functions
	int numOfelements, limit, arr[100];

	printf("Enter the number of elements: ");
	scanf("%d", &numOfelements);

	printf("Enter the limit (1 to M): ");
	scanf("%d", &limit);

	for (int i = 0; i < numOfelements; i++) {
		printf("Enter number %d: ",i+1);
		scanf("%d", &arr[i]);
	}

	int count[50], countThis = 0;

	for (int i = 1; i <= limit; i++) {
		for (int j = 0; j < numOfelements; j++) {
			if (i == arr[j]) {
				countThis++;
			}
		}
		count[i] = countThis;
		countThis = 0;
	}

	printf("\n");

	for (int i = 1; i <= limit; i++) {
		printf("%d\n", count[i]);
	}
}

//Searching a number using frequency array

void searchNum() {
	int arr[100005], n;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	//input
	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	int freq[100000];

	for (int i = 0; i < n; i++) {
		freq[arr[i]] = 1;
	}

	int searchNumber;
	
	printf("Enter the number to search: ");
	scanf("%d", &searchNumber);

	if (freq[searchNumber] == 1) {
		printf("%d Ache\n", searchNumber);
	}
	else {
		printf("%d Nai\n", searchNumber);
	}
}

//Search multiple numbers using frequnecy array
void searchNumbers() {
	int arr[100005], length;

	printf("Enter the number of elements: ");
	scanf("%d", &length);

	for (int i = 0; i < length; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	int freq[100005] = { 0 };

	for (int i = 0; i < length; i++) { 
		freq[arr[i]] = 1;
	}
	printf("\n");

	int m;

	printf("How many numbers do you want to search? ");
	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		int x;
		printf("Enter number %d: ", i + 1);
		scanf("%d", &x);

		if (freq[x] == 1) {
			printf("%d ache\n", x);
		}
		else {
			printf("%d nai\n", x);
		}
	}
}

//unique character in a string- using frequency array
void uniqueCh() {
	char str[100000];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}

	int len = strlen(str);

	int freqSt[52] = { 0 };

	for (int i = 0; i < len; i++) {
		char ch = str[i];
		
		if (ch >= 'a' && ch <= 'z') {
			int index = ch - 'a'; //ascii value of this character is used as index of freq array, 0-25 for lowercase
			freqSt[index] = 1;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			int index = ch - 'A' + 26; //ascii value of this character is used as index of freq array, 26-51 for uppercase
			freqSt[index] = 1;
		}
	}

	int countUniqueCh = 0;

	//counting unique uppercase letters and printing them
	for (int i = 26; i < 52; i++) {
		if (freqSt[i] == 1) {
			countUniqueCh++;
			printf("%c\t", i + 'A' - 26);
		}
	}

	//counting unique lowercase letters and printing them
	for (int i = 0; i < 26; i++) {
		if (freqSt[i] == 1) {
			countUniqueCh++;
			printf("%c\t", i + 'a');
		}
	}
	printf("\nNumber of unique characters: %d\n", countUniqueCh);
}

//number of apperence of a number in an array
//V. Codeforces problem https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

void numAppear() {
	int n, numbers[100005], limit;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter the limit(1 to Limit): ");
	scanf("%d", &limit);

	//input
	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	int freq[100005] = { 0 };

	for (int i = 0; i < n; i++) {
		freq[numbers[i]] = freq[numbers[i]] + 1;
	}

	for (int i = 1; i <= limit; i++) {
		printf("%d >>> %d\n",i, freq[i]);
	}
}
//2 3 2 5 2 8 7 ..>>> freq[2] = 1, freq[3] = 1, freq[5] = 1, freq[2] = frq[2] + 1 = 1+1=2, freq[2] = freq[2] + 1= 2+ 1 =3, freq[8] = freq[8] + 1 = 0+1 = 1
	//0 1 2 3 4 5 6