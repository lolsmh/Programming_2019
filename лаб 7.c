#include <stdio.h>
#include <locale.h>
#include <math.h>

struct Triangle{
    float x1, x2, x3, y1, y2, y3;
}Triangle;

int main(){
    setlocale(LC_ALL, "Rus");

    struct Triangle T;

    T.x1 = 1;
    T.y1 = 2;
    T.x2 = 3;
    T.y2 = 4;
    T.x3 = 5;
    T.y3 = 6;

    float a, b, s;
    a = sqrt(pow((T.x1 - T.x3), 2) + pow((T.y2 - T.y3), 2));
    b = sqrt(pow((T.x2 - T.x3), 2) + pow((T.y1 - T.y3), 2));
    s = (a * b)/2;

    printf("%f\n", s);

    enum Day{ООО, ЗАО, ИП};
    printf("ООО = %d\n", ООО);

    struct CardReader{
        unsigned SD: 1;
        unsigned CompactFlesh: 1;
        unsigned MemoryStick: 1;
    };
    union Checker
    {
        unsigned number;
        struct CardReader Status;
    };
    union Checker CheckStatus;
    scanf("%x", &CheckStatus.number);
    printf("SD = %d\n", CheckStatus.Status.SD);
    printf("CompactFlesh = %d\n", CheckStatus.Status.CompactFlesh);
    printf("MemoryStick = %d\n", CheckStatus.Status.MemoryStick);

}