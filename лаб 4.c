#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a;
    scanf("%d", &a);
    char *n[] = {"no", "yes"};
    printf("%s", n[(a >= 1)&&(a<=1000)]);
    printf("\n");
    int b;
    scanf("%d", &b);
    b = (b >> 2) & 1u;
    printf("%d", b);
    return 0;

}