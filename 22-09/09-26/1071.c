#include <stdio.h>

int main()
{
    int a;

    here:
        scanf("%d", &a);
        if (a!=0){
            printf("%d\n", a);
            goto here;
        }

    return 0;
}