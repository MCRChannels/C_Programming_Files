#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_DEPTHS 10
#define MAX_ROWS 10
#define MAX_COLS 10

void fillArray(void);
void printArray(void);
void sortArray(void);

// Global variables
int row, col, depth;
int array[MAX_DEPTHS][MAX_ROWS][MAX_COLS];
int tempArray[MAX_DEPTHS * MAX_ROWS * MAX_COLS];

int main(void) {
    char choice;
    // change every run
    srand(time(NULL));

    do {
        // Input size of array
        printf("Input rows (max %d): ", MAX_ROWS);
        scanf("%d", &row);
        printf("Input cols (max %d): ", MAX_COLS);
        scanf("%d", &col);
        printf("Input depths (max %d): ", MAX_DEPTHS);
        scanf("%d", &depth);

        // Validate input
        while (row > MAX_ROWS || col > MAX_COLS || depth > MAX_DEPTHS || row <= 1 || col <= 1 || depth <= 1) {
			if(row == 1 && col == 1 && depth == 1){
				printf("You have entered a single variable, not an array.\n");
			}else{
				printf("Error: Invalid size! Rows, cols, and depths must be between 1 and %d.\n", MAX_ROWS);
			}
            printf("Please try again\n");
            printf("Input rows (max %d): ", MAX_ROWS);
            scanf("%d", &row);
            printf("Input cols (max %d): ", MAX_COLS);
            scanf("%d", &col);
            printf("Input depths (max %d): ", MAX_DEPTHS);
            scanf("%d", &depth);
        }



        fillArray();

        printf("Original 3D Array:\n");
        printArray();

        sortArray();

        printf("\nSorted 3D Array:\n");
        printArray();

        // Ask if user wants to continue or exit
        printf("\nDo you want to enter new dimensions and continue? (y/n): ");
        scanf(" %c", &choice); // " %c" to capture the newline from previous input

    } while (choice == 'y' || choice == 'Y');

    printf("Program has ended.\n");

    return 0;
}

void fillArray(void) {
    int index = 0, i, j, k;

    for (i = 0; i < depth; i++) {
        for (j = 0; j < row; j++) {
            for (k = 0; k < col; k++) {
                array[i][j][k] = (rand() % 1200) + 1;
                // copy array3D to temp => sort!!
                tempArray[index++] = array[i][j][k];
            }
        }
    }
}

void printArray(void) {
    int i, j, k;
    for (i = 0; i < depth; i++) {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < row; j++) {
            for (k = 0; k < col; k++) {
                printf("%4d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void sortArray(void) {
    int index = depth * row * col;
    int i, j, k;

    // Sort
    for (i = 0; i < index - 1; i++) {
        for (j = 0; j < index - i - 1; j++) {
            if (tempArray[j] > tempArray[j + 1]) {
                int temp = tempArray[j];
                tempArray[j] = tempArray[j + 1];
                tempArray[j + 1] = temp;
            }
        }
    }

    // Put the sorted values back into the array
    index = 0;
    for (i = 0; i < depth; i++) {
        for (j = 0; j < row; j++) {
            for (k = 0; k < col; k++) {
                array[i][j][k] = tempArray[index++];
            }
        }
    }
}
