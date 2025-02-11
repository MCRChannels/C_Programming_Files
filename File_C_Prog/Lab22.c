#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

int main()
{
	int size_i;
	int i,j;
	int Array[MAX_SIZE][MAX_SIZE];

	/*
	printf("Please enter Size of Array2D [i] : ");
	scanf("%d",&size_i);
	printf("Please enter Size of Array2D [j] : ");
	scanf("%d",&size_j);
	*/

	for(i = 0 ; i < MAX_SIZE ; i++){
		for ( j = 0 ; j < MAX_SIZE ; j++ ) {
			Array[i][j] = 0;
			printf("Please enter value in Array[%d][%d] : ",i,j);
			scanf("%d",&Array[i][j]);

		}
	}

	printf("\n== Value in Array is ==\n");
	for(i = 0; i < MAX_SIZE ; i++){
		for ( j = 0 ; j < MAX_SIZE ; j++ ) {
			printf("Value Array[%d][%d] : %d\n",i,j,Array[i][j]);
		}
	}

	return 0;
}