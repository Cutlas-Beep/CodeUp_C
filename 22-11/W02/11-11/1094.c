#include <stdio.h>

int main(){
    int arrA[10000]={0,};
    int num, a;

    scanf("%d", &num); //개수

    for(int i=1; i<=num; i++)
        scanf("%d", &arrA[i]);

    for(int i=num; i>=1; i--){
        if(arrA[i] != 0x00)
            printf("%d ", arrA[i]);
    }
    return 0;
}