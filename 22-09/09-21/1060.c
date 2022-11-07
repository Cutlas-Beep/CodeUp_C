#include <stdio.h> // 2진수 포함 비트 단위 연산 (& = and)

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", a & b);

    return 0;
}