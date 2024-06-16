#include <stdio.h>

int main() {
 long binary1, binary2;
    int borrow = 0, difference[20], i = 0;

    // Input binary numbers
    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);

    // Initialize difference array with 0s
    for (i = 0; i < 20; i++) {
        difference[i] = 0;
    }

    i = 0;
    while (binary1 != 0 || binary2 != 0) {
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;

        // Subtract the borrow
        bit1 -= borrow;

        if (bit1 < bit2) {
            // Borrow from the next bit
            bit1 += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }

        difference[i++] = bit1 - bit2;

        // Move to the next digits
        binary1 /= 10;
        binary2 /= 10;
    }

    // Output the difference
    printf("Difference of the binary numbers: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", difference[i]);
    }
    printf("\n");

    return 0;
}
