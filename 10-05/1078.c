//정수(1 ~ 100) 1개를 입력받아 1부터 그 수까지 짝수의 합을 구해보자.

#include <stdio.h>

int main()
{
    int input_num = 0, num = 0, ans=0;

    scanf("%d", &input_num);

    for(int i = 0; i <= input_num-1; i++){
        num +=1;
        if(num % 2 == 0)
            ans += num;
    }
    printf("%d",ans);

    return 0;
}