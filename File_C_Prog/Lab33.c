#include <stdio.h>

int main() {

    int y1[5] = {1, 2, 3, 4, 5};
    int y2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int y3[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    int *p1, *p2, *p3;
    int i, j, k;

  	//Array1D
    p1 = &y1[0]; // pointer to y1
    printf("Array 1D: \n");
    for (i = 0; i < 5; i++) {
        printf("y1[%d] = %d, Address = %p\n", i, *(p1 + i), (p1 + i));
    }

    //Array2D
    p2 = &y2[0][0];   // pointer to y2
    printf("\nArray 2D: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("y2[%d][%d] = %d, Address = %p\n", i, j, *(p2 + i * 3 + j), (p2 + i * 3 + j));
        }
    }

    // Array3D
    p3 = &y3[0][0][0];  // pointer to y3
    printf("\nArray 3D: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                printf("y3[%d][%d][%d] = %d, Address = %p\n", i, j, k, *(p3 + i * 6 + j * 3 + k), (p3 + i * 6 + j * 3 + k));
            }
        }
    }

    return 0;
}
