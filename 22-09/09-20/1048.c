#include <stdio.h>

int main()
{
    int a, b;
    int answer = 1;

    scanf("%d %d", &a, &b); // b == 2의 b제곱 출력

    if (b == 0) // 세미콜론 주의
    {
        printf("%d", a);
    }

    for (int i=1; b+1 >= i; i++)
    {
        answer *= 2;

        if (b == i)
        {
            printf("%d\n", answer * a);
        }
    }

    return 0 ;
}