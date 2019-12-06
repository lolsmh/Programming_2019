#include <stdio.h>

int main() {
    int a;
    scanf("%x", &a);
    printf("%o\n", a);
    printf("%o\n", a);
    printf("%o\n", a << 3);
    printf("%o\n", a);
    printf("%o\n", ~a);
    int b;
    scanf("%o", &b);
    printf("%o\n", a ^ b);
    return 0;
}