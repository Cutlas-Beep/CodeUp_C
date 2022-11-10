#include <stdio.h>

int main(){
    int total_cardnum[49] = {0,}; //50까지 배열 생성 0으로 초기화
    int my_inputnum = 0; //설정 배열크기

    scanf("%d", &my_inputnum);
    for(int i=0; i<my_inputnum; i++)
        total_cardnum[i] = i+1; //[0] = 1
    
    int b;
    for(int i=0; i<my_inputnum-1; i++){ //0~입력값 (n-1)
        int innum; //선언 및 초기화
        scanf("%d", &innum);
            for(b=0; b<my_inputnum; b++){ //배열내 입력값 검사
                if(total_cardnum[b]==innum){ //일치값 NULL로 변경
                    total_cardnum[b] = 0x00;
                }
            }
    }
    for(int i=0; i<my_inputnum; i++){
        if(total_cardnum[i]!=0x00)
            printf("%d",total_cardnum[i]);
    }
    return 0;
}