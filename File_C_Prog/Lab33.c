#include <stdio.h>
#define MAX 10

void swap(int *arr1, int *arr2, int size, int index1, int index2);
void display(int arr[], int size);

int main() {
    int arr1[MAX], arr2[MAX], index1, index2;
    int size_i, i;
    char choice;

    do {
        do {
            printf("Please enter size of array: ");
            scanf("%d", &size_i);

            if (size_i > MAX || size_i == 0) printf("* Please input again *\n");

        } while (size_i > MAX || size_i == 0);

        printf("\n* Please enter values for the arrays *\n");

        printf("\nArray 1\n");
        for (i = 0; i < size_i; i++) {
            printf("arr1[%d]: ", i);
            scanf("%d", &arr1[i]);
        }

        printf("\nArray 2\n");
        for (i = 0; i < size_i; i++) {
            printf("arr2[%d]: ", i);
            scanf("%d", &arr2[i]);
        }

        printf("\n* All values in arrays *\n");
        printf("\nArray 1\n");
        display(arr1, size_i);
        printf("\nArray 2\n");
        display(arr2, size_i);

        do {
            printf("\nEnter the indices to swap (index1 index2): ");
            scanf("%d %d", &index1, &index2);

            if (index1 < 0 || index1 >= size_i || index2 < 0 || index2 >= size_i)
                printf("Wrong index, Try again!\n");

        } while (index1 < 0 || index1 >= size_i || index2 < 0 || index2 >= size_i);

        printf("\nBefore swapping:\n");
        printf("\nArray 1\n");
        display(arr1, size_i);
        printf("\nArray 2\n");
        display(arr2, size_i);

        swap(arr1, arr2, size_i, index1, index2);

        printf("\nAfter swapping:\n");
        printf("\nArray 1\n");
        display(arr1, size_i);
        printf("\nArray 2\n");
        display(arr2, size_i);

        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice != 'n' && choice != 'N');

    printf("\n");
    return 0;
}

void swap(int *arr1, int *arr2, int size, int index1, int index2) {
    // Correctly swap elements between two arrays
    if (index1 >= 0 && index1 < size && index2 >= 0 && index2 < size) {
        int temp = arr1[index1];
        arr1[index1] = arr2[index2];
        arr2[index2] = temp;
    } else {
        printf("Wrong index, Try again!\n");
    }
}


void display(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
		printf("Value[%d]: %d, Address: %u\n", i, arr[i], &arr[i]);
    }
    printf("\n");
}
