#include <stdio.h>
#define Max_Size 5

void inputArray(int Array[Max_Size][Max_Size], char ArrayName);
void multiplyArray(int Array1[Max_Size][Max_Size], int Array2[Max_Size][Max_Size], int result[Max_Size][Max_Size]);
void display(int Array[Max_Size][Max_Size]);

int main()
{
	int A[Max_Size][Max_Size], B[Max_Size][Max_Size], C[Max_Size][Max_Size];

	inputArray(A, 'A');
	inputArray(B, 'B');

	multiplyArray(A, B, C);

	display(C);
}

void inputArray(int Array[Max_Size][Max_Size], char ArrayName)
{
	int i,j;
	for (i = 0 ; i < Max_Size ; i++){
		for(j = 0 ; j < Max_Size ; j++){
			printf("Please enter value in %c[%d][%d] : ",ArrayName,i,j);
			scanf("%d",&Array[i][j]);
		}
	}
}

void multiplyArray(int Array1[Max_Size][Max_Size], int Array2[Max_Size][Max_Size], int result[Max_Size][Max_Size])
{
	int i,j;
	for(i = 0 ; i < Max_Size ; i++){
		for (j = 0 ; j < Max_Size ; j++){
			result[i][j] = Array1[i][j] * Array2[i][j];
		}
	}
}

void display(int Array[Max_Size][Max_Size])
{
	int i,j;
	int sum = 0;
	float average = 0;
	printf("\n\n======================");
	for(i = 0 ; i < Max_Size ; i++){
		for(j = 0 ; j < Max_Size ; j++){
			printf("\nC[%d][%d] : %d",i ,j ,Array[i][j]);
			sum += Array[i][j];
		}
	}
	average = sum / (Max_Size * Max_Size);

	printf("\n\nYour Average is : %f",average);
}