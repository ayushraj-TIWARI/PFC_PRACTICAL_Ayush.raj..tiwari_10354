// AYUSH RAJ TIWARI
// 10354 1E
#include <stdio.h>

int main() {
    int a, b, i;

   
    printf("Enter starting number (a): ");
    scanf("%d", &a);

    printf("Enter ending number (b): ");
    scanf("%d", &b);

    printf("Numbers from %d to %d are:\n", a, b);
    for (i = a; i <= b; i++) {
        printf("%d ", i);
    }

    return 0;
}
