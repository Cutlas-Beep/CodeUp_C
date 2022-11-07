#include <stdio.h>

int main ()
{
    char a[23];

    scanf("%s", &a);

    for(int i = 0; a[i] != '\0'; i++) // \0 은 Null값 추가
    {
        printf("\'%c\'\n", a[i]);
    }
    return 0;
}