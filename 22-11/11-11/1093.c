#include <stdio.h>

int main(){
    int arrA[101]={0,};
    int num, a;
    scanf("%d", &num); //개수
    for(int i=1; i<=num; i++){
        scanf("%d", &a);
        arrA[a] += 1;
    }
    for(int i=1; i<=23; i++)
        printf("%d ", arrA[i]);
    return 0;
}