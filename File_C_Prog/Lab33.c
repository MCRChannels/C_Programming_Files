#include <stdio.h>
#define MAX 10

void swap(int *arr1, int *arr2, int index1, int index2);
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
        printf("\n======== Array 1 ========\n");
        display(arr1, size_i);
        printf("======== Array 2 ========\n");
        display(arr2, size_i);

        do {
			do{
				printf("\nEnter the index arr1 to swap (0 - %d): ",size_i - 1);
            	scanf("%d", &index1);

            	if (index1 > size_i - 1) printf("\nIndex must not over than %d",size_i -1);

			} while(index1 > size_i -1);


			do{
				printf("\nEnter the index arr2 to swap (0 - %d): ",size_i - 1);
            	scanf("%d", &index2);

            	if (index2 > size_i - 1) printf("\nIndex must not over than %d",size_i -1);

			} while(index2 > size_i -1);

        } while (index1 < 0 || index1 >= size_i || index2 < 0 || index2 >= size_i);

        printf("\n==========================");
        printf("\n==== Before swapping ====\n");
        printf("Array 1\n");
        display(arr1, size_i);
        printf("Array 2\n");
        display(arr2, size_i);
        printf("==========================");

        printf("\n==== Switching ==== \narr1[%d] = %d (Address: %u) \narr2[%d] = %d (Address: %u)\n",
               index1, arr1[index1], (arr1 + index1), index2, arr2[index2], (arr2 + index2));

        swap(arr1, arr2, index1, index2);

        printf("\n===== To ===== \narr1[%d] = %d (Address: %u) \narr2[%d] = %d (Address: %u)\n",
               index1, arr1[index1], (arr1 + index1), index2, arr2[index2], (arr2 + index2));

		printf("==========================");
        printf("\n==== After swapping ====\n");
        printf("Array 1\n");
        display(arr1, size_i);
        printf("Array 2\n");
        display(arr2, size_i);
        printf("==========================");

        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice != 'n' && choice != 'N');

    printf("\n");
    return 0;
}

void swap(int *arr1, int *arr2, int index1, int index2) {
        int temp = *(arr1 + index1);
        *(arr1 + index1) = *(arr2 + index2);
        *(arr2 + index2) = temp;
}

void display(int arr[], int size) {
    int i;

    for (i = 0; i < size; i++) {
		printf("Value[%d]: %d, Address: %u\n", i, *(arr + i), (arr + i));
    }
    printf("\n");
}
