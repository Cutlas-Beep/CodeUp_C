#include <stdio.h> //XOR 연산

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", !a && !b); // input 0 0, 1 / input 1 1, 0

    return 0;
}