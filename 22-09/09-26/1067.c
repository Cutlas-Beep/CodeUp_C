#include <stdio.h>

int main()
{
    long long num;

    scanf("%lld", &num);

    if(num <= 0)
        printf("minus\n");
    else
        printf("plus\n");

    if((num % 2)==0)
        printf("even\n");

    else
        printf("odd\n");

    return 0;
}