//AYUSH RAJ TIWARI
//10354 1E
#include <stdio.h>

int main() {
    int pin, attempts = 0;
    int correctPin = 1234;
    int maxAttempts = 3;    

    printf("=== ATM PIN Authentication ===\n");

    while (attempts < maxAttempts) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("Access Granted. Welcome!\n");
            return 0;  
        } else {
            printf("Incorrect PIN. Try again.\n");
            attempts++;
        }
    }

    printf("Too many failed attempts. Card blocked.\n");
    return 0;
}