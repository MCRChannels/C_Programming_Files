#include <stdio.h>
#define Max_Size 5
int main(){
	int A[Max_Size][Max_Size], B[Max_Size][Max_Size], C[Max_Size][Max_Size];
	int i,j;
	int sum;
	float average;

	//input A[][]
	for ( i = 0 ; i < Max_Size ; i++ ){
		for ( j = 0 ; j < Max_Size ; j++ ){
			printf("Please enter Value in A[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	//input B[][]
	for ( i = 0 ; i < Max_Size ; i++ ){
		for ( j = 0 ; j < Max_Size ; j++ ){
			printf("Please enter Value in B[%d][%d] : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}

	printf("\n=========================\n");
	//C[][] = A[][] * B[][]
	for ( i = 0 ; i < Max_Size ; i++ ){
		for ( j = 0 ; j < Max_Size ; j++ ){
			C[i][j] = A[i][j] * B[i][j];
			sum += C[i][j];
			printf("C[%d][%d] is : %d\n",i,j,C[i][j]);
		}
	}
	average = sum / 25;

	printf("\n\nAverage Array C is : %d",average);


}
