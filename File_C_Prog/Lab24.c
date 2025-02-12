#include <stdio.h>
#define Max_Size 100
int main(){
	int A[Max_Size][Max_Size], B[Max_Size][Max_Size], C[Max_Size][Max_Size];
	int size_i,size_j;
	int i,j;
	int sum = 0;
	float average = 0;

	printf("Please enter Size of Array2D [i] : ");
	while (scanf("%d",&size_i) != 1){
		printf("\nDon't input Alphabet");
		printf("\nPlease input again!");
		printf("\nPlease enter Size of Array2D [i] : ");
		while(getchar() != '\n');
	}

	printf("Please enter Size of Array2D [j] : ");
	while (scanf("%d",&size_j) != 1){
		printf("\nDon't input Alphabet");
		printf("\nPlease input again!");
		printf("\nPlease enter Size of Array2D [j] : ");
		while(getchar() != '\n');
	}

	for ( i = 0 ; i < size_i ; i++ ){
		for ( j = 0 ; j < size_j ; j++ ){
			printf("Please enter Value in A[%d][%d] : ",i,j);
			while(scanf("%d",&A[i][j]) != 1){
				printf("\nDon't input Alphabet!");
				printf("\nPlease input again");
				printf("\nPlease enter Value in A[%d][%d] : ",i,j);
				while(getchar() != '\n');
			}
		}
	}

	for ( i = 0 ; i < size_i ; i++ ){
		for ( j = 0 ; j < size_j ; j++ ){
			printf("Please enter Value in B[%d][%d] : ",i,j);
			while(scanf("%d",&B[i][j]) != 1){
				printf("\nDon't input Alphabet!");
				printf("\nPlease input again");
				printf("\nPlease enter Value in B[%d][%d] : ",i,j);
				while(getchar() != '\n');
			}
		}
	}


	printf("\n=========================\n");
	for ( i = 0 ; i < size_i ; i++ ){
		for ( j = 0 ; j < size_j ; j++ ){
			C[i][j] = A[i][j] * B[i][j];
			sum += C[i][j];
			printf("C[%d][%d] is : %d\n",i,j,C[i][j]);
		}
	}

	average = sum / (size_i * size_j);

	printf("\n\n**Average Array C is : %.2f\n",average);

}
