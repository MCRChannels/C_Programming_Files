	#include <stdio.h>
	#define Max_Size 10

	int main() {
		int A[Max_Size][Max_Size], B[Max_Size][Max_Size], C[Max_Size][Max_Size];
		int size_i, size_j;
		int i, j, sum;
		float average;
		char choice;


		printf("[Max Size Array : 10]\n");
		do {
			do {
				printf("Please enter Size of Array2D [i] : ");
				size_i = 0;
				scanf("%d", &size_i);

				if (size_i < 2 || size_i > Max_Size){
					printf("Please input again!\n");
				}
			} while (size_i < 2 || size_i > Max_Size);

			do {
				printf("Please enter Size of Array2D [j] : ");
				size_j = 0;
				scanf("%d", &size_j);

				if (size_j < 2 || size_j > Max_Size){
					printf("Please input again!\n");
				}

			} while (size_j > Max_Size || size_j < 2);

			sum = 0;

			printf("\n==[ Input Array A ]==\n");
			for (i = 0; i < size_i; i++) {
				for (j = 0; j < size_j; j++) {
					printf("Please enter Value in A[%d][%d] : ", i, j);
					A[i][j] = 0;
					scanf("%d", &A[i][j]);
				}
			}
			printf("\n==[ Input Array B ]==\n");
			for (i = 0; i < size_i; i++) {
				for (j = 0; j < size_j; j++) {
					printf("Please enter Value in B[%d][%d] : ", i, j);
					B[i][j] = 0;
					scanf("%d", &B[i][j]);
				}
			}

			printf("\n[==[ Result Array C]==\n");
			for (i = 0; i < size_i; i++) {
				for (j = 0; j < size_j; j++) {
					C[i][j] = A[i][j] * B[i][j];
					sum += C[i][j];
					printf("C[%d][%d] is : %d\n", i, j, C[i][j]);
				}
			}

			average = (float)sum / (size_i * size_j);
			printf("\n\n**Average Array C is : %.2f\n", average);

			printf("\nDo you want to continue? (Y/N): ");
			scanf(" %c", &choice);
		} while (choice != 'n' && choice != 'N');
	}
