#include <stdio.h>

int main() {
    int arr[2][2][5];

    int max, min;
    int maxRow, maxCol, maxDepth;
    int minRow, minCol, minDepth;
	char end;
    int i, j, k;

	do{
	    printf("Please enter values for 3D array of size 2x2x5:\n");
	    for (i = 0; i < 2; i++) {
	        for (j = 0; j < 2; j++) {
	            for (k = 0; k < 5; k++) {
	                printf("arr[%d][%d][%d] = ", i, j, k);
	                scanf("%d", &arr[i][j][k]);
	            }
	        }
	    }

	    max = min = arr[0][0][0];
	    maxRow = maxCol = maxDepth = 0;
	    minRow = minCol = minDepth = 0;

	    for (i = 0; i < 2; i++) {
	        for (j = 0; j < 2; j++) {
	            for (k = 0; k < 5; k++) {
	                // Check for max
	                if (arr[i][j][k] > max) {
	                    max = arr[i][j][k];
	                    maxRow = i;
	                    maxCol = j;
	                    maxDepth = k;
	                }

	                // Check for min
	                if (arr[i][j][k] < min) {
	                    min = arr[i][j][k];
	                    minRow = i;
	                    minCol = j;
	                    minDepth = k;
	                }
	            }
	        }
	    }

	    printf("\nMax value: %d is at position [%d][%d][%d]\n", max, maxRow, maxCol, maxDepth);
    	printf("Min value: %d is at position [%d][%d][%d]\n", min, minRow, minCol, minDepth);

    	printf ("do you want to continue? (Y/N) : ");
    	scanf(" %c", &end);
	} while (end != 'n' && end != 'N');

	printf("program is ending ...");

    return 0;
}
