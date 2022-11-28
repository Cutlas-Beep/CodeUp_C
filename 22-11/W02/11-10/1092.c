#include <stdio.h>

int main(){
    int a, b, c, day=1;
    scanf("%d %d %d", &a, &b, &c);
    while(day%a!=0 || day%b!=0 || day%c!=0) //전부 입력값으로 나눠져(최소공배수) 0이 되면 while문은 멈추고 count값 출력
        day++;
    printf("%d", day);
    return 0;
}