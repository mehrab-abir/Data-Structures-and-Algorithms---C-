#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "functions.h"

//inserting an element
void insert() {
	int arr[100];

	int length;

	printf("Enter the number of elements(length): ");
	scanf("%d", &length);

	//taking input for arr[]
	for (int i = 0; i < length; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	//showing arr[]
	printf("Array arr[%d]: \n", length);
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}

	char choice;

	do {
		//inserting new value
		int newValueIndex, newValue;
		printf("\n");

		do {
			printf("In which position new value to be inserted: ");
			scanf("%d", &newValueIndex);

			if (newValueIndex >= length || newValueIndex < 0) {
				printf("Invalid Index\n");
			}
		} while (newValueIndex >= length || newValueIndex < 0);

		printf("Enter the new value: ");
		scanf("%d", &newValue);

		//updating the length of the array- increasing by 1
		length = length + 1;

		for (int i = length - 1; i >= newValueIndex; i--) {
			arr[i + 1] = arr[i]; //moving each element 1 index right
		}

		arr[newValueIndex] = newValue;

		printf("\n");
		printf("Do you want to insert another value? (y for yes, n for no): ");
		scanf(" %c", &choice);
	} while (choice == 'y' || choice == 'Y');

	//after inserting new element(s)
	printf("Final array after inserting: \n");
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}
}

//deleting an element
void delete() {
	int arr[100], length;
	printf("Enter the number of elements(length): ");
	scanf("%d", &length);

	for (int i = 0; i < length; i++) {
		printf("Enter number %d: ",i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\n");

	//printing the original array
	printf("Original Array: \n");
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

	char choice;

	do {
		//deleting an element
		int delIndex;

		do {
			printf("Index of the element that is to be deleted: ");
			scanf("%d", &delIndex);

			if (delIndex < 0 || delIndex >= length) {
				printf("Invalid Index.\n");
			}
		} while (delIndex < 0 || delIndex >= length);

		//delete operation
		for (int i = delIndex; i < length - 1; i++) {
			arr[i] = arr[i + 1];
		}

		length = length - 1; //length is upadated after deletion of one element

		printf("\nDo you want to delete more element? (y for yes, n for no): ");
		scanf(" %c", &choice);
	} while (choice == 'y' || choice == "Y");

	printf("\nFinal array after delete operation: \n");
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}
}

//reverse an array
void reverse() {
	printf("\nWe will reverse the original array. To achieve this, we will use another array to perform the reverse operation first,\nthen we will just copy the new array to our original array. In that case, original array will be reversed.\n\n");
	int arr[100], revArr[100], length;

	printf("Enter the number of elements (length): ");
	scanf("%d", &length);

	for (int i = 0; i < length; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("\n");
	//printing original array
	printf("Original Array: \n");
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}

	//reverese operation
	for (int i = length - 1, j=0; i >= 0; i--,j++) {
		revArr[j] = arr[i];
	}

	//copying the revArr to the original array, as we want to reverse the original array
	/*If we want the array to be reversed and stored in a different array, then we would not copy
	the revArr to the original array*/

	for (int i = 0; i < length; i++) {
		arr[i] = revArr[i];
	}

	//after reverse opeartion, the original array
	printf("\nAfter reversing the array: \n");
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}
}

//reverse and array without using a separate array, by using a single array
void reverse2() {
	printf("\nWe will reverse our original array without using a separate array, unlike the previous one.\n\n");
	int arr[100],length;

	printf("Enter the number of elements (length): ");
	scanf("%d", &length);

	for (int i = 0; i < length; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("\n");
	//printing original array
	printf("Original Array: \n");
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}

	//reverse operation in the same array
	for (int i = 0, j = length - 1; i <= j; i++, j--) { //note the condition used
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	printf("\n");
	//after reverse operation
	printf("After reversing the array: \n");
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}
}
