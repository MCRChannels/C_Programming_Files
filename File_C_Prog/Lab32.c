#include <stdio.h>

int main() {

    int y1[5] = {1, 2, 3, 4, 5};
    char y2[2][3] = {{'A', 'B', 'C'}, {'D', 'E', 'F'}};
    double y3[2][2][3] = {{{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}}, 
                          {{7.7, 8.8, 9.9}, {10.1, 11.2, 12.3}}};

    int *p1;
    char *p2;
    double *p3;
    int i, j, k; // for-loop

    // Array1D (int)
    p1 = &y1[0]; // pointer to y1
    printf("Array 1D: \n");
    for (i = 0; i < 5; i++) {
        printf("y1[%d] = %d, Address = %p\n", i, *(p1 + i), (p1 + i));
    }

    // Array2D (char)
    p2 = &y2[0][0];   // pointer to y2
    printf("\nArray 2D (char): \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("y2[%d][%d] = %c, Address = %p\n", i, j, *(p2 + i * 3 + j), (p2 + i * 3 + j));
        }
    }

    // Array3D (double)
    p3 = &y3[0][0][0];  // pointer to y3
    printf("\nArray 3D (double): \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                printf("y3[%d][%d][%d] = %.1f, Address = %p\n", i, j, k, *(p3 + i * 6 + j * 3 + k), (p3 + i * 6 + j * 3 + k));
            }
        }
    }

    return 0;
}