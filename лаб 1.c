#include <stdio.h>
#include <string.h>
int main() {
    float r;
    char s[60];
    char t;
    scanf("%f", &r);
    scanf("%59s", s);
    printf("%f \n", r);
    printf("%s", s);
    return 0;
}