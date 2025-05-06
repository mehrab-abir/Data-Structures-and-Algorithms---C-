#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include "functions.h"


void matrixAddition() {

	int matA[10][10], matB[10][10], A_plus_B[10][10], nRows, nCols;

	printf("Number of rows ( < 10): ");
	scanf("%d", &nRows);
	printf("Number of columns ( < 10): ");
	scanf("%d", &nCols);


	//imput value for matrix A
	printf("\nProvide values for matrix A: \n");
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("MatA[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &matA[row][col]);
		}
		printf("\n");
	}

	//displaying matrix A
	printf("\nMatrix A: \n");
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", matA[row][col]);
		}
		printf("\n");
	}

	//input values for matrix B
	printf("\nProvide values for matrix B: \n");
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("MatB[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &matB[row][col]);
		}
		printf("\n");
	}

	//displaying matrix B
	printf("\nMatrix B: \n");
	for (int row = 0; row < nRows; row++ ) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", matB[row][col]);
		}
		printf("\n");
	}

	//Adding matrixA and matrixB
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			A_plus_B[row][col] = matA[row][col] + matB[row][col];
		}
	}

	//displaying the result after addition
	printf("\nMatrix A + Matrix B: \n");
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", A_plus_B[row][col]);
		}
		printf("\n");
	}
}

//Sum of diagonal values of a square matrix
void diagonalAddition() {
	int mat[10][10], nRows, nCols, sum = 0;

	printf("Number of rows: ");
	scanf("%d", &nRows);

	printf("To add the diagonal values of a matrix, the matrix must be a square matrix, meaning the number of rows and columns is equal.\nTherefor, Number of columns = %d\n", nRows);

	nCols = nRows; //square matrix

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Mat[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &mat[row][col]);
		}
		printf("\n");
	}

	//displaying the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", mat[row][col]);
		}
		printf("\n");
	}

	//adding diagonal elements
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (row == col) {
				sum = sum + mat[row][col];
			}
		}
	}

	//Result
	printf("\nSummation of the diagonal values = %d\n", sum);
}

//sum of secondary/minor diagonal values of a square matrix
void minorDiagonalAddition() {
	int mat[10][10], nRows, nCols, sum = 0;

	printf("Number of rows: ");
	scanf("%d", &nRows);

	printf("To add the diagonal values of a matrix, the matrix must be a square matrix, meaning the number of rows and columns is equal.\nTherefor, Number of columns = %d\n", nRows);

	nCols = nRows; //square matrix

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Mat[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &mat[row][col]);
		}
		printf("\n");
	}

	//displaying the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", mat[row][col]);
		}
		printf("\n");
	}

	//adding diagonal elements
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (row + col == nRows - 1) { //note the condition here, it'a characteristic
				sum = sum + mat[row][col];
			}
		}
	}

	//Result
	printf("\nSummation of the secondary diagonal values = %d\n", sum);
}

//absolute difference between the summation of two diagonals- primary and secondary
void diagonalDiff() {
	int matrix[10][10], nRows, nCols, primarySum = 0, secondarySum = 0;

	printf("Number of rows: ");
	scanf("%d", &nRows);

	nCols = nRows; //as it must be a square matrix

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Matrix[%d][%d]= ", row + 1, col + 1);
			scanf("%d", &matrix[row][col]);
		}
		printf("\n");
	}

	//displaying the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", matrix[row][col]);
		}
		printf("\n");
	}

	//summation of primary diagonal values
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (row == col) {
				primarySum = primarySum + matrix[row][col];
			}
		}
	}

	//displaying the summation of primary diagonal values
	printf("Summation of the values of primary diagonal: %d\n", primarySum);

	//summation of secondary diagonal values
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (row + col == nRows - 1) {
				secondarySum = secondarySum + matrix[row][col];
			}
		}
	}

	//displaying the summation of secondary diagonal values
	printf("Summation of the values of primary diagonal: %d\n", secondarySum);

	//difference
	int diagonalDifference = primarySum - secondarySum;

	//final result
	if (diagonalDifference < 0) {
		printf("Difference between the summation of the primary and secondary diagonal values: %d\n", diagonalDifference * (-1));
	}
	else {
		printf("Difference between the summation of the primary and secondary diagonal values: %d\n", diagonalDifference);
	}
}


//Summation of the values of lower triangle of a square matrix
void lowerTriangleAddition() {
	int mat[10][10], nRows, nCols, sum = 0;

	printf("Number of rows: ");
	scanf("%d", &nRows);

	printf("To add the values of lower triangle of a matrix, the matrix must be a square matrix, meaning the number of rows and columns is equal.\nTherefor, Number of columns = %d\n", nRows);

	nCols = nRows; //square matrix

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Mat[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &mat[row][col]);
		}
		printf("\n");
	}

	//displaying the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", mat[row][col]);
		}
		printf("\n");
	}

	//adding the values for lower triangle
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (row > col) {
				sum = sum + mat[row][col];
			}
		}
	}

	//result
	printf("\nSummation of the values of the lower triangle = %d\n", sum);
}


//Summation of the values of upper triangle of a square matrix
void upperTriangleAddition() {
	int mat[10][10], nRows, nCols, sum = 0;

	printf("Number of rows: ");
	scanf("%d", &nRows);

	printf("To add the values of upper triangle of a matrix, the matrix must be a square matrix, meaning the number of rows and columns is equal.\nTherefor, Number of columns = %d\n", nRows);

	nCols = nRows; //square matrix

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Mat[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &mat[row][col]);
		}
		printf("\n");
	}

	//displaying the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", mat[row][col]);
		}
		printf("\n");
	}

	//adding the values for lower triangle
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (row < col) {
				sum = sum + mat[row][col];
			}
		}
	}

	//result
	printf("\nSummation of the values of the upper triangle = %d\n", sum);
}

//summation of row elements
void addRowElements() {
	int mat[10][10], nRows, nCols, sum = 0;

	printf("Number of rows: ");
	scanf("%d", &nRows);

	printf("Number of columns: ");
	scanf("%d", &nCols);


	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Mat[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &mat[row][col]);
		}
		printf("\n");
	}

	//displaying the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", mat[row][col]);
			sum = sum + mat[row][col];
		}
		printf("  = %d", sum);
		sum = 0;
		printf("\n");
	}
}

//Transpose Matrix
void transposeMatrix() {
	int matrix[10][10], transpose[10][10], nRows, nCols;

	printf("Number of rows: ");
	scanf("%d", &nRows);
	printf("Number of Columns: ");
	scanf("%d", &nCols);

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Mat[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &matrix[row][col]);
		}
		printf("\n");
	}

	//display original matrix
	printf("\nOriginal Matrix: \n");
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", matrix[row][col]);
		}
		printf("\n");
	}

	//transpose the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			transpose[col][row] = matrix[row][col];
		}
	}

	//display the transpose matrix
	printf("\nTranspose of the original matrix: \n");
	for (int row = 0; row < nCols; row++) { //note the condition
		for (int col = 0; col < nRows; col++) {  // note the condition
			printf("%d  ", transpose[row][col]);
		}
		printf("\n");
	}
}

//Checking scaler matrix
void isScaler() {
	int matrix[10][10], nRows, nCols;

	printf("Number of rows: ");
	scanf("%d", &nRows);

	printf("For a matrix to be scaler, the matrix must be a square matrix, meaning the number of rows and columns is equal.\nTherefor, Number of columns = %d\n", nRows);

	nCols = nRows; //square matrix

	//input
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("Mat[%d][%d]: ", row + 1, col + 1);
			scanf("%d", &matrix[row][col]);
		}
		printf("\n");
	}

	//Displaying the matrix
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			printf("%d  ", matrix[row][col]);
		}
		printf("\n");
	}

	int firstElement = matrix[0][0];
	int scaler = 1;

	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			if (row == col) {
				if (matrix[row][col] != firstElement) {
					scaler = 0;
					break;
				}
			}
			else{
				if (matrix[row][col] != 0) {
					scaler = 0;
					break;
				}
			}
		}
	}

	if (scaler == 1) {
		printf("\nThe matrix is scaler.\n");
	}
	else {
		printf("\nThe matrix is not scaler.\n");
	}
}

