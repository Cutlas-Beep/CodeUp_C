//A, B, C, D, E, F 중 하나가 입력될 때,
//1부터 F까지 곱한 16진수 구구단의 내용을 출력해보자.

#include <stdio.h>

int main()
{
    int a;
    scanf("%x", &a);
    for(int i = 1; i <= 15; i++){
        printf("%X*%X=%X\n", a,i,a*i);
    }
}