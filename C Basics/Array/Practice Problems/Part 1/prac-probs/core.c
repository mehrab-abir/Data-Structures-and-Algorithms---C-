#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "core.h"

void divisors() {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
		}
	}

}


void evenNumbers() {

	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	int even = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
			even = 1;
		}
	}
	if (even != 1) {
		printf("-1");
	}
}


void luckyNumber() {

	int n;
	printf("Enter a number between 10 and 99: ");
	scanf("%d", &n);

	int tens = n / 10;
	int ones = n % 10;
	
	if (ones != 0 && (tens % ones == 0) || (ones % tens == 0)) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}
