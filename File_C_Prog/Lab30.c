#include <stdio.h>
#define MAX_SIZE 20

int main() {
    int Array[MAX_SIZE];
    int *ptr = Array;
    int i, sum = 0, sumv = 0;
    float average;
    char end;

	do{
	    printf("=== Average Array 1D [20] ===\n");
	    for (i = 0; i < MAX_SIZE; i++) {
	        printf("Array[%d] : ", i);
	        scanf("%d", ptr + i);
	    }

	    printf("\n=== Average of Array 1D ===\n");
	    for (i = 0; i < MAX_SIZE; i++) {
	        printf("\nArray[%d] : %d", i, *(ptr + i));
	        sum += *(ptr + i);
	    }

	    average = (float)sum / MAX_SIZE;
    	printf("\nAverage of Array 1D : %.2f\n", average);

    	printf("Do you want to continue? (Y/N) : ");
    	scanf(" %c",&end);
	}while (end != 'N' && end != 'n');

	printf ("Program is ending ...");

    return 0;
}
