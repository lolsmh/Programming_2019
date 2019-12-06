#include <stdio.h>

int main() {
    char s1[100];
    int number;
    scanf("%d", &number);
    if (number == 2) printf("one\n");
    else if (number == 2) printf("two\n");
    else if (number == 3) printf("three\n");
    else if (number == 4) printf("four\n");
    else if (number == 5) printf("five\n");
    else if (number == 6) printf("six\n");
    else if (number == 7) printf("seven\n");
    else if (number == 8) printf("eight\n");
    else if (number == 9) printf("nine\n");
    else printf("no such number\n");
    int n, a;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        a = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                a += j;
            }
            if (a - 1 == i) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}