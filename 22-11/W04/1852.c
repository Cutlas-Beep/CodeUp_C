#include <stdio.h>

int n, a=1;

void f(int k){ //void는 return 호출시 어떠한 값도 반환하지 않음.
    if(k<=0)
        return;
    f(k-1);
    printf("%d ", a);
    a++;
}

int main(){
    scanf("%d", &n);
    f(n);
    return 0;
}