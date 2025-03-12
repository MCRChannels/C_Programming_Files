#include <stdio.h>

int main() {

    int arr[3][3][3];
    int sum = 0;
    int i, j, k;
    char end;
    int *ptr;
    ptr = &arr[0][0][0];

	do{
	    printf("Please enter values for 3D array of size 3x3x3:\n");
	    for (i = 0; i < 3; i++) {
	        for (j = 0; j < 3; j++) {
	            for (k = 0; k < 3; k++) {
	                printf("arr[%d][%d][%d] = ", i, j, k);
	                scanf("%d", (ptr + (i * 9) + (j * 3) + k));
	            }
	        }
	    }


	    for (i = 0; i < 3; i++) {
	        for (j = 0; j < 3; j++) {
	            for (k = 0; k < 3; k++) {
	                sum += *(ptr + (i * 9) + (j * 3) + k);
	            }
	        }
	    }

	    printf("\nThe sum of all elements in the 3D array is: %d\n", sum);

	    printf("do you want to continue? (Y/N) : ");
    	scanf(" %c",&end);
	}while(end != 'N' && end != 'n');

	printf("program is ending ...");

    return 0;
}


