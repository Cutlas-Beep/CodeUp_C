# include <stdio.h>

void hi(int n){
    if(n == 0)// n이 0이면 함수 탈출
        return;        
    printf("%d\n", n); // n출력
    hi(n-1); //if n is 10 ~~ hi(10-1) -> 9, hi(9-1) -> 8, hi(8-1) -> 7 ... hi(1-1) -> hi out
}

int main(){ 
    int s;
    scanf("%d", &s);
    hi(s);
    return 0;
}