//AYUSH RAJ TIWARI
//10354 1E
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i][i]; 
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}