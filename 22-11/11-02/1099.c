#include <stdio.h>

int main(){
    int arr[10][10]={0, };
    int a, b; // a = 행, b = 열

    for(a=0; a<10; a++){ //입력
        for(b=0; b<10; b++)
            scanf("%d", &arr[a][b]);
    }
    int x = 1, y = 1; //개미집 위치 2,2
    while(1){
        if((arr[x][y+1]==1 && arr[x+1][y]==1)||arr[x][y]==2){
            arr[x][y]=9;
            break;
        }
        arr[x][y]=9;
        if(arr[x][y+1]==0 || arr[x][y+1]==2)
            y+=1;
        else if(arr[x+1][y]==0 || arr[x+1][y]==2)
            x+=1;
    }
    for(int i=0; i<10; i++){ //array 출력문
        for(int j=0; j<10; j++)
            printf("%d ", arr[i][j]);           
        printf("\n"); 
    }
    return 0;
}


