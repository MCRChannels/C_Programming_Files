#include <stdio.h>
#define MAX 10

void swap(int *arr1, int *arr2, int size, int index);
void display(int arr[], int size);

int main() {
    int arr1[MAX], arr2[MAX], index;
    int size_i, i;
    char choice;

    do {
        printf("Please enter size of array: ");
        scanf("%d", &size_i);

        printf("\n* Please enter value of array *\n");

        printf("\nArray 1\n");
        for (i = 0; i < size_i; i++) {
            arr1[i] = 0;
            printf("arr1[%d]: ", i);
            scanf("%d", &arr1[i]);
        }

        printf("\nArray 2\n");
        for (i = 0; i < size_i; i++) {
            arr2[i] = 0;
            printf("arr2[%d]: ", i);
            scanf("%d", &arr2[i]);
        }

        printf("\n* All value in array *\n");
        printf("\nArray 1\n");
        display(arr1, size_i);
        printf("\nArray 2\n");
        display(arr2, size_i);

        printf("\nEnter the index to swap: ");
        scanf("%d", &index);

        printf("Before swapping:\n");
        printf("\nArray 1\n");
        display(arr1, size_i);
        printf("\nArray 2\n");
        display(arr2, size_i);

        swap(arr1, arr2, size_i, index);

        printf("After swapping:\n");
        printf("\nArray 1\n");
        display(arr1, size_i);
        printf("\nArray 2\n");
        display(arr2, size_i);

        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &choice);  //
    } while (choice != 'n' && choice != 'N');

    printf("\n");

    return 0;
}


void swap(int *arr1, int *arr2, int size, int index) {
    if (index >= 0 && index < size) {
        int temp = *(arr1 + index);
        *(arr1 + index) = *(arr2 + index);
        *(arr2 + index) = temp;
    } else {
        printf("Invalid index!\n");
    }
}

void display(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}


