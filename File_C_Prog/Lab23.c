#include <stdio.h>
int main()
{
	int A[10] , B[10] , C[10];
	int i;

	// input A[]
	for(i = 0 ; i < 10 ; i++){
		printf("Please enter value in A[%d] : ",i);
		while (scanf("%d",&A[i]) != 1){
			printf("\nDon't input Alphabet");
			printf("\nPlease input again!");
			printf("\nPlease enter value in A[%d] : ",i);
			while(getchar() != '\n');
		}
	}

	// input B[]
	for(i = 0 ; i < 10 ; i++){
		printf("Please enter value in B[%d] : ",i);
		while (scanf("%d",&B[i]) != 1){
				printf("\nDon't input Alphabet");
				printf("\nPlease input again!");
				printf("\nPlease enter value in B[%d] : ",i);
				while(getchar() != '\n');
		}
	}

	printf("\n==Value of Array_C is==\n");
	// A[] + B[]
	for(i = 0 ; i < 10 ; i++){

		C[i] = A[i] + B[i];
		printf("C[%d] : %d\n",i,C[i]);
	}
}
