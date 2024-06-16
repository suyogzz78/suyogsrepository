#include<stdio.h>
#include<stdlib.h>

void getelement(int arr[]) {
    int i;
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] != 1 && arr[i] != 0) {
            printf("Invalid input ");
            exit(1);
        }
    }
}

void onescomplement(int arr[]) {
    int i;
    for (i = 0; i < 4; i++) {
        arr[i] = (arr[i] == 0) ? 1 : 0;
    }
}

void increment(int arr[]) {
    int i, carry, temp;
    temp = arr[3] + 1;
    arr[3] = temp % 2;
    carry = temp / 2;
    for (i = 2; i >= 0; i--) {
        temp = arr[i] + carry;
        arr[i] = temp % 2;
        carry = temp / 2;
    }
}

int addnum(int arr1[], int arr2[], int arr3[]) {
    int i, carry = 0;
    for (i = 3; i >= 0; i--) {
        int var = arr1[i] + arr2[i] + carry;
        if (var == 0 || var == 1) {
            arr3[i] = var;
            carry = 0;
        } else if (var == 2) {
            arr3[i] = 0;
            carry = 1;
        } else if (var == 3) {
            arr3[i] = 1;
            carry = 1;
        }
    }
    return carry;
}

int main() {
    int i, bin1[4], bin2[4], result[4];
    printf("enter the first 4bit binary number: ");
    getelement(bin1);
    printf("enter the second 4bit binary number: ");
    getelement(bin2);
    onescomplement(bin2);
    int c;
    c = addnum(bin1, bin2, result);
    if (c == 1) {
        increment(result);
        printf("Sum: ");
        for (i = 0; i < 4; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    } else if (c == 0) {
        printf("Representing in signed magnitude:\n");
        printf("1000");
        onescomplement(result);
        for (i = 0; i < 4; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }
    return 0;
}
