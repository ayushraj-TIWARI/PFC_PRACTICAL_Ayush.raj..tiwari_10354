//AYUSH RAJ TIWARI
//10354 1E
#include <stdio.h>

void printTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    printTriangle(height);

    return 0;
}