#include <stdio.h>

int main(){
    int arrA[10000]={0,};
    int num, size;
    scanf("%d", &size);
    for(int i=1; i<=size; i++){
        scanf("%d", &num);
        arrA[num] += 1;        
    }
    for(int i=1; i<=size; i++){
        if(arrA[i]!=0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}