#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d %d %d", &a,&b, &c);
    printf("%d", (a>b ? b:a) > c ? c : (a>b ? b:a)); // input 1, 2, 3 / output 1 (least num)

    return 0;
}