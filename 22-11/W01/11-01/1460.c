#include <stdio.h>

int main(){
    int input; // if 4
    scanf("%d", &input);
    int arr[input][input]; // [4][4]
    int a,b;
    int c = 1;
    for(a=0; a<input; a++){
        for(b=0; b<input; b++){
                arr[a][b] = c; //a = 행, b = 열
                c+=1;               
            }
        }
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}