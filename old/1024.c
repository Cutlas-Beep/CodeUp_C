#include <stdio.h>

int main()
{
    int i;
    char a[10];

    printf("input your word\n");
    scanf("%s", &a);

    for(i=0; a[i]!='\0'; i++)
    printf("%c\n", a[i]);
    
    return 0;
}