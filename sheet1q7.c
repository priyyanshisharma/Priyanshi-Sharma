#include <stdio.h>

int main() {
    int choice, number, binary = 0, decimal = 0, base = 1, remainder;

    printf("Choose conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Binary to Decimal
        printf("Enter a binary number: ");
        scanf("%d", &number);
        int temp = number;
        
        while (temp > 0) {
            remainder = temp % 10;
            decimal += remainder * base;
            temp /= 10;
            base *= 2;
        }
        
        printf("Decimal equivalent: %d\n", decimal);
    } 
    else if (choice == 2) {
        // Decimal to Binary
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        int temp = number;
        base = 1;  // Reset base for binary calculation

        while (temp > 0) {
            remainder = temp % 2;
            binary += remainder * base;
            temp /= 2;
            base *= 10;
        }

        printf("Binary equivalent: %d\n", binary);
    } 
    else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
