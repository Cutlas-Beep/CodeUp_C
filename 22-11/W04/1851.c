#include <stdio.h>

int n;

void f(int k)
{
    if(k<=0) //함수 정지문
        return;
    f(k-1); //함수 호출
    printf("*");
}

int main()
{
    scanf("%d", &n);
    f(n);
    printf("\n");
}