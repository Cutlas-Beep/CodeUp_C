#include <stdio.h>

int main(){ //time out code
    int one, two;

    scanf("%d", &one);
    int arr1[one];
    for(int i=0;i < one;i++)
        scanf("%d", &arr1[i]);
    
    scanf("%d", &two);
    int arr2[two];
    for(int i=0; i<two;i++)
        scanf("%d", &arr2[i]);

    int a,b,c=0;
    for(a=0; a<two; a++){
        for(b=0; b<one; b++){
            if(arr2[a] == arr1[b]){
                arr2[a] = 1;
                c++;              
            }
        }
        if(arr2[a] != 1 || arr2[a] == 1 && c == 0){
            arr2[a] = 0;
            c=0;
        }          
    } //

    for(int i=0; i<two; i++) //출력
        printf("%d ", arr2[i]);
    return 0;
}