#include <stdio.h>

int main()
{
    int num;

    printf("decimal number(10) to octal(8) converter\n\ninput number.\n\n");
    scanf("%d", &num);
    printf("%o", num); // %o (octal)

    return 0;
}