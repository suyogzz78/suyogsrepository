#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

// Function to invert the bits of a binary number
void invertBits(char binary[], int size) {
    for (int i = 0; i < size; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else
            binary[i] = '0';
    }
}

// Function to add 1 to a binary number
void addOne(char binary[], int size) {
    int carry = 1;
    for (int i = size - 1; i >= 0; i--) {
        if (binary[i] == '0' && carry == 1) {
            binary[i] = '1';
            carry = 0;
        } else if (binary[i] == '1' && carry == 1) {
            binary[i] = '0';
            carry = 1;
        }
    }
}

// Function to perform 2's complement subtraction
void twosComplementSubtraction(char minuend[], char subtrahend[]) {
    // Step 1: Find the 2's complement of the subtrahend
    int size = strlen(subtrahend);
    invertBits(subtrahend, size);
    addOne(subtrahend, size);

    // Step 2: Add minuend and 2's complement of subtrahend
    for (int i = 0; i < size; i++) {
        if (minuend[i] == '1' && subtrahend[i] == '1') {
            minuend[i] = '0';
        } else if (minuend[i] == '0' && subtrahend[i] == '0') {
            minuend[i] = '0';
        } else {
            minuend[i] = '1';
        }
    }

    // Ignore any overflow
}

int main() {
    char minuend[MAX_SIZE], subtrahend[MAX_SIZE];

    // Input the minuend and subtrahend
    printf("Enter the minuend: ");
    scanf("%s", minuend);
    printf("Enter the subtrahend: ");
    scanf("%s", subtrahend);

    // Perform 2's complement subtraction
    twosComplementSubtraction(minuend, subtrahend);

    // Displaying the result
    printf("Result of 2's complement subtraction: %s\n", minuend);

    return 0;
}