#include <stdio.h>
int arr[10000000] = {0,}; //(1 <= N <= 10,000,000)
int main(){
    int size1, size2;
    int num;
    int i;
    scanf("%d", &size1);
    for(i=0; i < size1; i++){
        scanf("%d", &num);
        arr[num] = 1;
    }
    scanf("%d", &size2); //( 1 <= M <= 100,000)
    for(i=0; i<size2; i++){
        scanf("%d", &num);
        printf("%d ", arr[num]);
    }
    return 0;
}
