#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", (!a && !b) || (a && b)); // 1, 1 일때 (1 != 0, 1 != 0) or (1 and 1) = 1
    
    return 0;
}