#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {

	int* numbers;
	int n = 5;

	numbers = (int*)malloc(n * sizeof(int)); //allocate memory using malloc()
	if (numbers == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	//initialize the array
	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}


	printf("\n");
	printf("Square of these numbers: \n");
	for (int i = 0; i < n; i++) {
		printf("%d >>> %d\n", numbers[i], numbers[i] * numbers[i]);
	}
	printf("\n");

	//reallocate- resize memory using realloc()
	printf("\nAfter reallocating memory and resizing the array:\n");
	n = 10;
	numbers = (int*)realloc(numbers, n * sizeof(int));
	if (numbers == NULL) {
		printf("Memory reallocation failed\n");
		return 1;
	}

	//initialize the new elements
	for (int i = 5; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	printf("Qube of these numbers: \n");
	for (int i = 0; i < n; i++) {
		printf("%d >>> %d\n", numbers[i], numbers[i] * numbers[i]* numbers[i]);
	}


	free(numbers);
	numbers = NULL;

	return 0;
}