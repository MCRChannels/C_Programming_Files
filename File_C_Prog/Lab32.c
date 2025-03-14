#include <stdio.h>

int main() {

    int y1[5] = {1, 2, 3, 4, 5};
    char y2[2][3] = {{'A', 'B', 'C'}, {'D', 'E', 'F'}};
    float y3[2][2][3] = {{{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}},
                          {{7.7, 8.8, 9.9}, {10.1, 11.2, 12.3}}};

    int *p1;
    char *p2;
    float *p3;
    int i, j, k; // for-loop

    // Array1D (int) 1 int = 4 bytes
    p1 = &y1[0]; // pointer to y1
    printf("Array 1D: \n");
    for (i = 0; i < 5; i++) {
        printf("Value = %d, Address = %u\n", *(p1 + i), (p1 + i));
    }

    // Array2D (char) 1 char = 1 bytes
    p2 = &y2[0][0];   // pointer to y2
    printf("\nArray 2D (char): \n");
    for (i = 0; i < 2 * 3; i++) {
        printf("Value = %c, Address = %u\n", *(p2 + i), (p2 + i));
    }

    // Array3D (double) 1 double = 8 bytes
    p3 = &y3[0][0][0];  // pointer to y3
    printf("\nArray 3D (float): \n");
    for (i = 0; i < 2 * 2 * 3; i++) {
                printf("Value = %.1f, Address = %u\n", *(p3 + i), (p3 + i));
    }
    return 0;
}
