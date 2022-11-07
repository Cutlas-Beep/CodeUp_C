#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("%d", num1 % num2); // % 는 음(-)이 아닌 정수에 대해서만 연산된다.

    return 0;
}