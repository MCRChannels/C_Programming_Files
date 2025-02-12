#include <stdio.h>
#define Max_Size 5
int main(){
	int A[Max_Size][Max_Size], B[Max_Size][Max_Size], C[Max_Size][Max_Size];
	int i,j;
	int sum = 0;
	float average = 0;

	for ( i = 0 ; i < Max_Size ; i++ ){
		for ( j = 0 ; j < Max_Size ; j++ ){
			printf("Please enter Value in A[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	for ( i = 0 ; i < Max_Size ; i++ ){
		for ( j = 0 ; j < Max_Size ; j++ ){
			printf("Please enter Value in B[%d][%d] : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}


	printf("\n=========================\n");
	for ( i = 0 ; i < Max_Size ; i++ ){
		for ( j = 0 ; j < Max_Size ; j++ ){
			C[i][j] = A[i][j] * B[i][j];
			sum += C[i][j];
			printf("C[%d][%d] is : %d\n",i,j,C[i][j]);
		}
	}

	average = sum / (Max_Size * Max_Size);

	printf("\n\n**Average Array C is : %.2f\n",average);

}
