#include <stdio.h>

int main(){
    int arr[10][10]={0, };
    int size=sizeof(arr);

    int a, b; // a = 행, b = 열
    for(a=0; a<10; a++){ //입력
        for(b=0; b<10; b++)
            scanf("%d", &arr[a][b]);
    }

    int x = 2, y = 2; //개미집 위치

    for(x=2; x<10; x++){
        for(y=2; y<10; y++)
            if(arr[x][y+1] = 0){
                arr[x][y] = 9;
                arr[x][y+1];
                break;
            }
            else if(arr[x+1][y] = 0){
                arr[x][y] = 9;
                arr[x+1][y];
                break;
            }
            if(arr[x][y] = 2){
                arr[x][y] =9;
                break;
            }
    }

    for(int i=0; i<10; i++){ //array 출력문
        for(int j=0; j<10; j++){
            printf("%d ", arr[i][j]);           
        }
        printf("\n"); 
    }

    return 0;
}


