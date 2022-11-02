#include <stdio.h>

int main()
{
    int a, b, c, sum;
    double avr;

    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avr = sum / 3;

    printf("%d\n%.01f", sum, avr);

    return 0;
}