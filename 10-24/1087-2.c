#include <stdio.h> //등차의 n번째 값 구하기

int main(){
    int inputnum = 0, totaladd=0, add=0; //
    scanf("%d", &inputnum);

    while(1){
        if(inputnum == totaladd || inputnum <= totaladd)
            break;
        add++;
        totaladd += add;
    }

    printf("%d", totaladd);
}