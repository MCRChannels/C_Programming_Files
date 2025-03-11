#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

void array2d();
void array3d();

int main()
{
    int choice;
    char end;

	do{
	    do {
	        printf("Choose array type:\n");
	        printf("1. 2D Array\n");
	        printf("2. 3D Array\n");
	        printf("Enter your choice (1 or 2): ");

	        while (scanf("%d", &choice) != 1) {
	            printf("\nDon't input Alphabet");
	            printf("\nPlease input again!");
	            printf("\nEnter your choice (1 or 2): ");
	            while(getchar() != '\n');
	        }

	        if (choice != 1 && choice != 2) {
	            printf("\nPlease enter 1 or 2 only\n\n");
	        }
	    } while (choice != 1 && choice != 2);

	    // Call function based on user's choice
	    if (choice == 1) {
	        array2d();
	    } else {
	        array3d();
    	}

    	printf("do you want to continue? (Y/N) : ");
    	scanf(" %c", &end);

    	printf ("Program is ending ...");
	} while (end != 'n' && end != 'N');

    return 0;
}

// Array2D
void array2d() {
    int size_i, size_j;
    int i, j;
    int Array2D[MAX_SIZE][MAX_SIZE];

    // Get size of 2D array
    do {
        printf("Please enter Size of Array2D [i] : ");
        while (scanf("%d", &size_i) != 1) {
            printf("\nDon't input Alphabet");
            printf("\nPlease input again!");
            printf("\nPlease enter Size of Array2D [i] : ");
            while(getchar() != '\n');
        }

        printf("Please enter Size of Array2D [j] : ");
        while (scanf("%d", &size_j) != 1) {
            printf("\nDon't input Alphabet");
            printf("\nPlease input again!");
            printf("\nPlease enter Size of Array2D [j] : ");
            while(getchar() != '\n');
        }

        if (size_i > MAX_SIZE || size_j > MAX_SIZE) {
            printf("\nPLEASE DO NOT ENTER VALUE more than %d\n", MAX_SIZE);
            printf("Please input again");
            printf("\n");
        }
    } while (size_i > MAX_SIZE || size_j > MAX_SIZE);

    // Input values for 2D array
    for (i = 0; i < size_i; i++) {
        for (j = 0; j < size_j; j++) {
            Array2D[i][j] = 0;
            printf("Please enter value in Array2D[%d][%d] : ", i, j);
            scanf("%d", &Array2D[i][j]);
        }
    }

    // Display values in 2D array
    printf("\n== Value in 2D Array is ==\n");
    for (i = 0; i < size_i; i++) {
        for (j = 0; j < size_j; j++) {
            printf("Value Array2D[%d][%d] : %d\n", i, j, Array2D[i][j]);
        }
    }
}

// Array3D
void array3d() {
    int size_i, size_j, size_k;
    int i, j, k;
    int Array3D[MAX_SIZE][MAX_SIZE][MAX_SIZE];

    // Get size of 3D arra1y
    do {
        printf("Please enter Size of Array3D [i] : ");
        while (scanf("%d", &size_i) != 1) {
            printf("\nDon't input Alphabet");
            printf("\nPlease input again!");
            printf("\nPlease enter Size of Array3D [i] : ");
            while(getchar() != '\n');
        }

        printf("Please enter Size of Array3D [j] : ");
        while (scanf("%d", &size_j) != 1) {
            printf("\nDon't input Alphabet");
            printf("\nPlease input again!");
            printf("\nPlease enter Size of Array3D [j] : ");
            while(getchar() != '\n');
        }

        printf("Please enter Size of Array3D [k] : ");
        while (scanf("%d", &size_k) != 1) {
            printf("\nDon't input Alphabet");
            printf("\nPlease input again!");
            printf("\nPlease enter Size of Array3D [k] : ");
            while(getchar() != '\n');
        }

        if (size_i > MAX_SIZE || size_j > MAX_SIZE || size_k > MAX_SIZE) {
            printf("\nPLEASE DO NOT ENTER VALUE more than %d\n", MAX_SIZE);
            printf("Please input again");
            printf("\n");
        }
    } while (size_i > MAX_SIZE || size_j > MAX_SIZE || size_k > MAX_SIZE);

    // Input values for 3D array
    for (i = 0; i < size_i; i++) {
        for (j = 0; j < size_j; j++) {
            for (k = 0; k < size_k; k++) {
                Array3D[i][j][k] = 0;
                printf("Please enter value in Array3D[%d][%d][%d] : ", i, j, k);
                scanf("%d", &Array3D[i][j][k]);
            }
        }
    }

    // Display values in 3D array
    printf("\n== Value in 3D Array is ==\n");
    for (i = 0; i < size_i; i++) {
        for (j = 0; j < size_j; j++) {
            for (k = 0; k < size_k; k++) {
                printf("Value Array3D[%d][%d][%d] : %d\n", i, j, k, Array3D[i][j][k]);
            }
        }
    }
}


