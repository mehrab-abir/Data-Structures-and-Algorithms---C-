#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//Replace MinMax
void minMax() {
	int n, arr[15];
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	int max = arr[0], min = arr[0];;

	for (int i = 1; i < n; i++) {
		if (arr[i] > max) { //to find maximum
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i]; //to find minimum
		}
	}

	printf("Max = %d\nMin = %d\n", max, min);

	for (int i = 0; i < n; i++) {
		if (arr[i] == max) {
			arr[i] = min;
		}
		else if (arr[i] == min) {
			arr[i] = max;
		}
		else {

		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
}

//Lucky Array
void luckyArray() {
	int n, Arr[10];
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ",i+1);
		scanf("%d", &Arr[i]);
	}

	int min = Arr[0];

	for (int i = 1; i < n; i++) {
		if (Arr[i] < min) {
			min = Arr[i];
		}
	}

	printf("\nMin = %d\n", min);

	int countMin = 0;
	for (int i = 0; i < n; i++) {
		if (Arr[i] == min) {
			countMin++;
		}
	}
	printf("Minimum number count = %d\n", countMin);

	if (countMin % 2 != 0) {
		printf("Lucky");
	}
	else {
		printf("Unlucky");
	}
}

int main() {

	//minMax();
	luckyArray();

	return 0;
}