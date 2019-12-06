#include <stdio.h>

int main() {
    FILE *f1 = fopen("f1", "r");
    FILE *f2 = fopen("f2", "r");
    FILE *f3 = fopen("f3", "w");
    int c;
    c = fgetc(f1);
    while (c != EOF) {
        fputc(c, f3);
        c = fgetc(f1);
    }
    c = fgetc(f2);
    while (c != EOF) {
        fputc(c, f3);
        c = fgetc(f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}