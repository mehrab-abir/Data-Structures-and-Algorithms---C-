#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//sum of consecutinve odd numbers
void sumOdd() {
	int t;
	printf("Number of test cases: ");
	scanf("%d", &t);

	for (int tCase = 1; tCase <= t; tCase++) {
		int x, y, sum = 0;
		printf("Enter two numbers: ");
		scanf("%d%d", &x, &y);

		if (x > y) {
			int temp = x;
			x = y;
			y = temp;
		}

		for (int i = x + 1; i < y; i++) {
			if (i % 2 != 0) {
				sum = sum + i;
			}
		}
		printf("%d\n", sum);
	}	
}

//summation for 1 to N
void sumSeries() {
	long long int n, sum = 0, i = 1;
	printf("Enter the value of n: ");
	scanf("%lld", &n);

	sum = (n * (n + 1)) / 2;
	printf("%lld", sum);
	
}

//factorial
void factorial() {
	int t;
	printf("Enter the number of test cases: ");
	scanf("%d", &t);

	for (int tCase = 1; tCase <= t; tCase++) {
		int n;
		printf("Enter the value of n: ");
		scanf("%d", &n);

		long long int fact = 1;

		if (n == 0) {
			fact = 1;
		}
		else {
			for (int i = 1; i <= n; i++) {
				fact = fact * i;
			}
		}
		printf("%lld\n", fact);
	}
}

//Fixed Password
void fixedPassword() {
	int pass = 1999, n;

	do {
		printf("Enter password: ");
		scanf("%d", &n);

		if (n == pass) {
			printf("Correct");
		}
		else {
			printf("Wrong\n");
		}
	} while (n != pass);
}

//Shape3
void shape() {
	int numOfRows;
	printf("Enter the number of rows: ");
	scanf("%d", &numOfRows);

	for (int row = 1; row <= numOfRows; row++) {
		for (int col = 1; col <= numOfRows-row; col++) {
			printf(" ");
		}
		for (int col = 1; col <= row * 2 - 1; col++) {
			printf("*");
		}
		printf("\n");
	}

	for (int row = numOfRows; row >= 1; row--) {
		for (int col = 1; col <= numOfRows - row; col++) {
			printf(" ");
		}
		for (int col = 1; col <= row * 2 - 1; col++) {
			printf("*");
		}
		printf("\n");
	}
}

//one more loop application
void numbers() {
	for (int i = 1, j = 6, k = 11; i <= 5; i++, j++, k++) {
		printf("%d\t%d\t%d\n", i, j, k);
	}
}

int main() {

	//sumOdd();
	//sumSeries();
	//factorial();
	//fixedPassword();
	//shape();
	numbers();

	return 0;
}