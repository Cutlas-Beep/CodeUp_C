#include <stdio.h>

int main(){
    
    int i, j, k, c=0; //조건 전역변수
    int r, g, b; //입력값
    scanf("%d%d%d", &r, &g, &b);

    for(i=0; i<r; i++)
        for(j=0; j<g; j++)
            for(k=0; k<b; k++)
                {
                printf("%d %d %d\n", i, j, k);
                c++;
                }

    printf("%d ", c);
}
