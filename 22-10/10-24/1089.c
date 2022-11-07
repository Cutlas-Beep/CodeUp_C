#include <stdio.h>

int main(){
    int first, d, num;
    scanf("%d %d %d", &first, &d, &num);

    for(int i = 1; num != i; i++){
            first += d;
    }
    printf("%d", first);
}

//if (1,3,5) 1 4 7 10 13