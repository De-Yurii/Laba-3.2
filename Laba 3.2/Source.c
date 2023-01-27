#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i;
	float suma1 = 0, suma2 = 0;
	float matr[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			printf("Enter the %d element of %d row ", (j + 1), (i + 1));
			scanf("%f", &matr[i][j]);
		}
	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%f\t", *(*matr + 3 * i + j));
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++) {
		suma1 += matr[i][i];
		suma2 += matr[i][2 - i];
	}

	printf("\n");
	printf("Suma diagonal 1: %f\n", suma1);
	printf("Suma diagonal 2: %f\n", suma2);
	printf("\n");
	float new_matrix[3][3] = { 0 };
	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			new_matrix[j][i] = matr[i][j];
		}
	}
	
	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%f\t", *(new_matrix[i]+j));

		}
		printf("\n");
	}
	return 0;
}