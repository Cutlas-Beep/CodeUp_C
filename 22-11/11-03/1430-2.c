#include <stdio.h>

int main(){
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
    for(a=0; a<one; a++){
        for(b=0; b<two; b++){
            c=0;
            if(arr1[a] == arr2[b]){
                printf("1 ");
                c++;
            }
        }
        if(c != 1){
            printf("0 ");
        }
    }
    return 0;
}