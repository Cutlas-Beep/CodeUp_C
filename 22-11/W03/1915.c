#include <stdio.h>

int s = 1;

//피보나치 수열 1[1] 1[2] 2[3] 3[4] 5[5] 8 13 21 34...

int n; //전역 변수
int p(int a){
    if(a==1||a==2) //exit조건, a가 1번째나 2번째가 나올때까지 뿌리내림
        return 1;
    return p(a-2) + p(a-1); //가지치기 
}

int main(){
    scanf("%d", &n);
    printf("%d",p(n));
    return 0;
}
