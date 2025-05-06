#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void charConvert() {


	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch >= 'A' && ch <= 'Z') {
		printf("%c", ch + 32);
	}
	else{
		printf("%c", ch - 32);
	}
}


//comparison- right or wrong
void comparison() {
	int a, b;
	char s;

	printf("Enter the left side number: ");
	scanf("%d", &a);
	printf("Enter the right side number: ");
	scanf("%d", &b);
	printf("Enter the symbol to comparison (<, >, = , these 3 only): ");
	scanf(" %c", &s);

	printf("\n%d %c %d\n", a, s, b);

	if (s == '>') {
		if (a > b) {
			printf("Right");
		}
		else {
			printf("Wrong");
		}
	}
	else if (s == '<') {
		if (a < b) {
			printf("Right");
		}
		else {
			printf("Wrong");
		}
	}
	else {
		if (a == b) {
			printf("Right");
		}
		else {
			printf("Wrong");
		}
	}

}

void mathematicalExpression() {
	int a, b, c;
	char s, q;

	printf("A + B = C or \tA - B = C or \tA * B = C\n");

	printf("Enter the expression (use symbol only +, -, *): ");
	scanf("%d %c%d %c%d", &a,&s,&b,&q,&c);

	if (s == '+') {
		if (a + b == c) {
			printf("Yes");
		}
		else {
			printf("%d", a + b);
		}
	}
	else if (s == '-') {
		if (a - b == c) {
			printf("Yes");
		}
		else {
			printf("%d", a - b);
		}
	}
	else if (s == '*') {
		if (a * b == c) {
			printf("Yes");
		}
		else {
			printf("%d", a * b);
		}
	}
	else {
		printf("Invalid Input");
	}
}

//priblem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
//Memo and Momo
void memoMomo() {
	long long int a, b, k;
	printf("Enter the value of a - for Memo: ");
	scanf("%lld", &a);
	printf("Enter the value of b - for Momo: ");
	scanf("%lld", &b);
	printf("Enter the value of k - divisor: ");
	scanf("%lld", &k);

	if (a % k == 0 && b % k == 0) {
		printf("Both");
	}
	else if (a % k == 0 && b % k != 0) {
		printf("Memo");
	}
	else if (a % k != 0 && b % k == 0) {
		printf("Momo");
	}
	else {
		printf("No one");
	}
 }

//sort numbers
void sortNums() {
	int a, b, c, max, min, mid;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	printf("Enter 3rd number: ");
	scanf("%d", &c);
	
	//maximum
	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= a && b >= c) {
		max = b;
	}
	else {
		max = c;
	}

	//minimum
	if (a <= b && a <= c) {
		min = a;
	}
	else if (b <= a && b <= c) {
		min = b;
	}
	else {
		min = c;
	}

	//mid
	if ((a >= b && a <= c) || (a <= b && a >= c)) {
		mid = a;
	}
	else if ((b >= a && b <= c) || (b <= a && b >= c)) {
		mid = b;
	}
	else {
		mid = c;
	}

	printf("%d\n%d\n%d\n\n", min, mid, max);
	printf("%d\n%d\n%d", a,b,c);
}


int main() {

	//charConvert();
	//comparison();
	//mathematicalExpression();
	//memoMomo();
	sortNums();


	return 0;
}