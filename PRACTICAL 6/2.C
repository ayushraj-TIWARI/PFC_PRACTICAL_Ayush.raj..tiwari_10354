//AYUSH RAJ TIWARI
//10354 1E

#include <stdio.h>

int main() {
    int n, i, sum = 0;


    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {

        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);

    return 0;
}