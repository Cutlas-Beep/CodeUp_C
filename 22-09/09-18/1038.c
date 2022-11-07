#include <stdio.h>

int main()
{
    long long int a, b; // int (10진수)는 2,147,483,647가 최대 그 이상 범위는 long int, long long int를 써야됨
    
    scanf("%lld %lld", &a, &b);
    printf("%lld", a + b);

    return 0;
}