#include <stdio.h>

int main(){
    int n, sum = 0, i=1;
    scanf("%d", &n);
    while(1){
        sum += i;
        if(sum >= n)
            break;
        i ++;
    }
    printf("%d", i);
}