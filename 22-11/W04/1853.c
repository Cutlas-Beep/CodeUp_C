#include <stdio.h>
//재귀로 1부터 n까지 합 리턴하기
int n, ans=0;

int f(int k){
    if(k <= 1)//정지 조건
        return ans+1;
    ans += k;
    return f(k-1);
}

int main(){ 
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}