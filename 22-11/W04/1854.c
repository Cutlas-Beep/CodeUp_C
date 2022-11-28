#include <stdio.h>

//재귀로 각 자리 수의 합 리턴하기
int sum = 0;
int f(long long int n){
    if(n<1)
        return sum;
    
    sum += n%10;
    f(n/10);
}

int main(){
    long long int a;
    scanf("%lld", &a);
    f(a);
    printf("%d", sum);
    return 0;
}