#include <stdio.h>

int main()
{
    char a[31];

    scanf("%s", &a);

    for(int i = 0; a[i] != '\0'; i++) // for문은 ; 세미콜론 사용, for(초기식; 조건식; 변화식)
    {
        printf("\'%c\'\n", a[i]);
    }

    return 0;
}