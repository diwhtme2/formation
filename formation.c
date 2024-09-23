#include <stdio.h>


void octal() {
    int n;
    
    printf("Enter a number to convert to octal: ");
    scanf("%d", &n);
    
    printf("Octal representation: %o\n", n);
}


void hexadecimal() {
    int n;
    
    printf("Enter a number to convert to hexadecimal: ");
    scanf("%d", &n);
    
    printf("Hexadecimal representation: %x\n", n);
}


void binary_bit() {
    int n;

    printf("Enter a number to convert to binary: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0");
        return;
    }
    
    int temp = 0;
    
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit) temp = 1;
        if (temp) printf("%d", bit);
    }
    
    printf("\n");
}


void binary() {
    int n;

    printf("Enter a number to convert to binary: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return;
    }

    int bits[32];
    int index = 0;

    while (n > 0) {
        bits[index++] = n % 2;
        n /= 2;
    }
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }

    printf("\n");
}


void convertToBase() {
    int base, n;
    
    printf("Enter the base to convert to: ");
    scanf("%d", &base);
    printf("Enter a number to convert: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return;
    }

    char digits[32];
    char digitChars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digitCount = 0;

    while (n > 0) {
        digits[digitCount++] = digitChars[n % base];
        n /= base;
    }

    for (int i = digitCount - 1; i >= 0; i--) {
        printf("%c", digits[i]);
    }
    
    printf("\n");
}


void main() {

}
