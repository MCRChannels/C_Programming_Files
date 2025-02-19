#include <stdio.h>
#define Max_Size 10
int main(){
	int A[Max_Size][Max_Size], B[Max_Size][Max_Size], C[Max_Size][Max_Size];
	int size_i,size_j;
	int i,j;
	int sum = 0;
	float average = 0;

	printf("Please enter size of Array, DO NOT EXCEED \'10\'\n");
	do {
		printf("Please enter Size of Array2D [i] : ");
		while (scanf("%d",&size_i) != 1 || size_i < 1 || size_i > Max_Size){
			printf("\nSize_i musn't lower than 1 \nPlease input again!");
			printf("\nPlease enter Size of Array2D [i] : ");
		}

		printf("Please enter Size of Array2D [j] : ");
		while (scanf("%d",&size_j) != 1 || size_j < 1 || size_j > Max_Size){
			printf("\nSize_j musn't lower than 1 \nPlease input again!");
			printf("\nPlease enter Size of Array2D [j] : ");
		}

		if (size_i > Max_Size || size_j > Max_Size){
			printf("\nPLEASE DO NOT ENTER VALUE more than 10\n");
			printf("Please input again\n");
		}

	} while (size_i > Max_Size || size_j > Max_Size);
	printf("\n");
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

	printf("\n**Average Array C is : %.2f\n",average);

}
