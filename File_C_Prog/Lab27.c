#include <stdio.h>
#define size 10

void inputArray(int Array[], char ArrayName);
void sumArrays(int Array1[], int Array2[], int result[]);
void display(int Array[]);

main()
{
	int A[size], B[size], C[size];

	inputArray(A, 'A');
	inputArray(B, 'B');

	sumArrays(A,B,C);
	display(C);
}

void inputArray(int Array[], char ArrayName){
	int i;
	for (i = 0 ; i < size ; i++){
		printf("Please enter value in %c[%d] : ",ArrayName,i);
		scanf("%d",&Array[i]);
	}
}

void sumArrays(int Array1[], int Array2[], int result[]){
	int i;
	for( i = 0 ; i < size ; i++ ){
		result[i] = Array1[i] + Array2[i];
	}
}

void display(int Array[]){
	int i;
	printf("\n=== Value of Array_C is==\n");
	for(i = 0 ; i < size ; i++){
		printf("C[%d] : %d\n",i,Array[i]);
	}
}