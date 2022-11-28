#include <stdio.h>

int innum;

int bincounvert(int innum){
    if(innum < 1)
        return 0;
    
    bincounvert(innum / 2);
    printf("%d", innum%2);
}

int main(){
    int n;
    scanf("%d", &n);
    bincounvert(n);
    return 0;
}