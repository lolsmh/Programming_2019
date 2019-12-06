#include <stdio.h>
#include <string.h>
int main( )
{
    char s1[100];
    char s2[100];
    scanf("%s%s", &s1, &s2);
    if(strcmp(s1, s2) == 0){
        printf("Equal\n");
    } else {
        printf("Diffrent\n");
    }

    char s3[100];
    char s4[100];
    scanf("%s%s", &s3, &s4);
    strcpy(s3, s4);
    printf("%s\n", s3);

    char s5[100];
    scanf("%s", &s5);
    int x = strlen(s5);
    printf("%d\n", x);

    char str[100];
    char a;
    int count = 0;
    scanf("%s", &str);
    scanf(" %c", &a);
    int h;
    h = strlen(str);
    for(int i = 0; i < h; i++){
        if(str[i] == a){
            count = i;
        }
    }
    if(count == 0){
        printf("No symbol");
    } else {
        printf("%d\n", count + 1);
    }


    char s6[100];
    char s7[100];
    scanf("%s%s", &s6, &s7);
    int o;
    o = strspn(s6, s7);
    printf("%d\n", o);

    return 0;
}
