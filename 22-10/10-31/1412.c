#include <stdio.h>

int main(){
    char input[90]; //0으로 초기화
    gets(input); //입력

    int size = sizeof(input); //배열 크기 구하기
    int a=0, b=0, c;
    int count=0;

    for(c=97; c<=122; c++){ //ascii (a to z) = 97~122
        for(a=0; a<size && input[a]!=0x00; a++){ //NULL 계산 방지
            if(c == input[a])
                count++;
        }
        printf("%c:%d\n", c,count);
        count=0;
    }
    return 0;
}