#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//Babul's vowels
void vowels() {
	char c;
	printf("Enter a lowercase character: ");
	scanf(" %c", &c);

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		printf("Vowel");
	}
	else {
		printf("Consonant");
	}
}

//zeros and ones
void zeroOne() {
	int n, arr[20], countZero=0, countOne=0;
	printf("How many numbers: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			countZero++;
		}
		else {
			countOne++;
		}
	}
	printf("%d %d", countZero, countOne);
}


//zeros and ones toggle
void zerOneToggle() {
	int n, arr[20], toggleNum;
	printf("How many numbers: ");
	scanf("%d", &n);

	for (int i = 1; i <=n; i++) {
		printf("Enter number %d: ", i);
		scanf("%d", &arr[i]);
	}

	printf("Enter the position of the number to be toggled: ");
	scanf("%d", &toggleNum);

	if (arr[toggleNum] == 0) {
		arr[toggleNum] = 1;
	}
	else {
		arr[toggleNum] = 0;
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}
}


//Pattern
void pattern() {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= row; col++) {
			printf("%d", col);
		}
		printf("\n");
	}
	for (int row = n-1; row >= 1; row--) {
		for (int col = 1; col <= n - row; col++) {
			printf(" ");
		}
		for (int col = 1; col <= row; col++) {
			printf("%d", col);
		}
		printf("\n");
	}
}

//Salami difference
void salamiDifference() {
	int n, salami[20], amountDifference[20], maxSalami;
	printf("How many people got salami: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Person %d got: ", i + 1);
		scanf("%d", &salami[i]);
	}
	maxSalami = salami[0];

	for (int i = 1; i < n; i++) {
		if (salami[i] > maxSalami) {
			maxSalami = salami[i];
		}
	}
	for (int i = 0; i < n; i++) {
		amountDifference[i] = maxSalami - salami[i];
		printf("%d ", amountDifference[i]);
	}
}

int main() {

	//vowels();
	//zeroOne();
	//zerOneToggle();
	//pattern();
	salamiDifference();

	return 0;
}