#include <stdio.h>

int main(){
    int a, b, o=0;
    scanf("%d %d", &a, &b);
    o=0;
    for(int i=1; i<=a; i++){
        o ++;
        for(int i=1; i<=b; i++)
            printf("%d %d\n",o, i);
    }
    return 0;
}
//if input -1 : outpu = 1

//2 3
//1 1
//1 2
//1 3