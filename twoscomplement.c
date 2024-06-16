#include <stdio.h>
#define size 8

int main() {
    char binary[size+1], onescomplement[size+1], twoscomplement[size+1];
    int i, carry = 1; // for adding 1 to the least significant bit

    printf("Enter the %d-bit binary value: ", size);
    gets(binary);
    for(i = 0; i < size; i++) {
        if(binary[i] == '1') {
            onescomplement[i] = '0';
        } else if(binary[i] == '0') {
            onescomplement[i] = '1';
        } else {
            printf("Invalid input.\n");
            return 1; // exit the program with error code
        }
    }

    onescomplement[size] = '\0'; // null-terminate the string

    // Add 1 to the one's complement
    for(i = size - 1; i >= 0; i--) {
        if(onescomplement[i] == '1' && carry == 1) {
            twoscomplement[i] = '0';
        } else if(onescomplement[i] == '0' && carry == 1) {
            twoscomplement[i] = '1';
            carry = 0;
        } else {
            twoscomplement[i] = onescomplement[i];
        }
    }

    twoscomplement[size] = '\0'; // null-terminate the string

    printf("Original binary number: %s\n", binary);
    printf("One's complement: %s\n", onescomplement);
    printf("Two's complement: %s\n", twoscomplement);

    return 0;
}
