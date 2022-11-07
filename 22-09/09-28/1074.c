//정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    while(num != 0){
        printf("%d\n", num);
        num -= 1;
    }
    return 0;
}