#include <stdio.h>

int main(){
    int arrB[20][20]={0,};
    int num; //돌의 개수
    int x,y;

    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        scanf("%d %d", &x, &y);
        arrB[x][y] = 1;
    }
    int a,b;
    for(a=1; a<20; a++){
        for(b=1; b<20; b++)
            printf("%d ", arrB[a][b]);
        printf("\n");
    }
    return 0;
}