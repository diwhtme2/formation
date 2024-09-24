#include <stdio.h>
#include <stdlib.h>

char* convertToBase(int n, int base) {
    if (n == 0) {
        char *result = malloc(2);
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    
    char digits[32];
    char digitChars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int c = 0;
    while (n > 0) {
        digits[c++] = digitChars[n % base];
        n /= base;
    }
    
    char *result = malloc(c + 1);
    for (int i = 0; i < c; i++)
        result[i] = digits[c - 1 - i];
    
    result[c] = '\0';

    return result;
}

void convertToBaseInput() {
    int n, base;
    
    printf("number\n");
    scanf("%d", &n);
    printf("base (2-36)\n");
    scanf("%d", &base);

    char *result = convertToBase(n, base);
    printf("%s", result);

    free(result);
}

int binary(int n) {
    if (n == 0)
        return 0;
    
    int result = 0;
    int c = 1;
    while (n > 0) {
        result += (n % 2) * c;
        n /= 2;
        c *= 10;
    }
    
    return result;
}

void binaryInput() {
    int n;
    printf("number\n");
    scanf("%d", &n);

    int result = binary(n);
    printf("%d", result);
}

void main() {
    
}