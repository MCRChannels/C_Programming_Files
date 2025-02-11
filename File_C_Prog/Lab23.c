#include <stdio.h>
int main()
{
	int A[10] , B[10] , C[10];
	int i;

	// input A[]
	for(i = 0 ; i < 10 ; i++){
		printf("Please enter value in A[%d] : ",i);
		scanf("%d",&A[i]);
	}

	// input B[]
	for(i = 0 ; i < 10 ; i++){
		printf("Please enter value in B[%d] : ",i);
		scanf("%d",&B[i]);
	}

	printf("\n==Value of Array_C is==\n");
	// A[] + B[]
	for(i = 0 ; i < 10 ; i++){

		C[i] = A[i] + B[i];
		printf("C[%d] : %d\n",i,C[i]);
	}
}