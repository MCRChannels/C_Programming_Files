#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
	int size_i,size_j;
	int i,j;
	int Array[MAX_SIZE][MAX_SIZE];

	do {
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

		if (size_i > MAX_SIZE || size_j > MAX_SIZE){
			printf("\nPLEASE DO NOT ENTER VALUE more than 100\n");
			printf("Please input again");
			printf("\n");
		}

	} while(size_i > MAX_SIZE || size_j > MAX_SIZE);


	for(i = 0 ; i < size_i ; i++){
		for ( j = 0 ; j < size_j ; j++ ) {
			Array[i][j] = 0;
			printf("Please enter value in Array[%d][%d] : ",i,j);
			scanf("%d",&Array[i][j]);

		}
	}

	printf("\n== Value in Array is ==\n");
	for(i = 0; i < size_i ; i++){
		for ( j = 0 ; j < size_j ; j++ ) {
			printf("Value Array[%d][%d] : %d\n",i,j,Array[i][j]);
		}
	}

	return 0;
}
