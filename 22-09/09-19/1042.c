#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("%d", num1 / num2);

    return 0;
}

// int a;
// scanf("%d", &a);
// printf("%f", (float)a); <<-- 정수로 저장되어 있는 값을 실수형(float)으로 명시적으로 변환하여 출력한다.