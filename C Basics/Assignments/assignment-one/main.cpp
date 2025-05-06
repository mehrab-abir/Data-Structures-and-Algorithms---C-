#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//Function- Salami
int salami(int s1, int s2, int s3) {

	int sum;
	sum = s1 + s2 + s3;

	return sum;
}

//Function- Multiplication
long long int multiply(long long int n1, long long int n2) {

	long long int product;

	product = n1 * n2;

	return product;
}

//Function - Khana Pina 1
void khana_pina_1(int m) {

	if (m >= 1000) {
		printf("Three Kacchi");
	}
	else if (m >= 500) {
		printf("One Large Pizza");
	}
	else if (m >= 250) {
		printf("Three Small Burger");
	}
	else if (m >= 100) {
		printf("Three Fuchka");
	}
	else {
		printf("Nothing");
	}
	printf("\n");
}


//Function - Khana Pina 2
void khana_pina_2(int m) {

	if (m % 3 == 0) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	printf("\n");
}

//Function - Khana Pina 3
void khana_pina_3(int n) {


	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
		if (i % 3 == 0 || i % 5 == 0) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	printf("\n");
}


int main() {

	int n;

	do {
        printf("\n");

        printf("1: Salami.\n");
        printf("2: Multiply.\n");
        printf("3: Khana Pina.\n");
        printf("4: Khana Pina 2.\n");
        printf("5: Khana Pina 3.\n");
        printf("0: Quit.\n");

		printf("Select an item from the list above: ");
		scanf("%d", &n);

		switch (n) {
		case 1:
			int abul, babul, kabul, totalSalami;
			printf("Salami problem.\n");

			printf("Enter Abul's salami: ");
			scanf("%d", &abul);
			printf("Enter Babul's salami: ");
			scanf("%d", &babul);
			printf("Enter Kabul's salami: ");
			scanf("%d", &kabul);

			totalSalami = salami(abul,babul,kabul);
			printf("Total: %d\n", totalSalami);
			break;
		case 2:
			printf("Multiplication of 2 integer numbers: \n");

			long long int a, b, product;

			printf("Enter first number: ");
			scanf("%lld", &a);
			printf("Enter second number: ");
			scanf("%lld", &b);

			product = multiply(a,b);
			printf("Product = %lld\n", product);
			break;
		case 3:
			printf("Khan Pina 1- What are they gonna eat: \n");
			int money;
			printf("Enter the amount of money(must be integer): ");
			scanf("%d", &money);

			khana_pina_1(money);
			break;
		case 4:
			printf("Khana Pina 2- is divisible by 3 or not:\n");
			int amount;
			printf("Enter the amount(must be integer): ");
			scanf("%d", &amount);
			khana_pina_2(amount);
			break;
		case 5:
			printf("Khan Pina 3- is divisible by 3 or 5: \n");
			int number;
			printf("Enter the amount(must be integer): ");
			scanf("%d", &number);

			khana_pina_3(number);
			break;
		case 0:
			printf("\nExiting the program...\n\nGood Bye.\n");
			break;
		default:
			printf("Invalid input.\n");
		}

	} while (n != 0);

	return 0;
}




