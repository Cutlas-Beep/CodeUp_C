#include <stdio.h>

int main(){ //overtime 5s (limit 4s)
    int one, two;

    scanf("%d", &one);
    int arr1[one];
    for(int i=0;i < one;i++)
        scanf("%d", &arr1[i]);
    
    scanf("%d", &two);
    int arr2[two];
    for(int i=0; i<two;i++)
        scanf("%d", &arr2[i]);

    int a,b,c;
    for(a=0; a<two; a++){
        c=0;
        for(b=0; b<one; b++){
            if(arr1[b] == arr2[a]){
                c++;
                printf("1 ");
                break;
            }
        }
        if(c!=1 && two != a)
            printf("0 ");
    }
    return 0;
}