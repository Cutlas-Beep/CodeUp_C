#include <stdio.h> //문제 char array에 int형을 저장시켜 비교가 안됨 (아님)5

int main(){
    // int size; //N장
    // scanf("%d", &size); //크기
    char size=10;

    char array[size-1]; //1~10[10] // 1[0] 2[1] 3[2] 4[3] 5[4] 6[5] 7[6] 8[7] 9[8] 10[9]
    char compare[size-1]; //비교
    char input[size-2];
    int cardnum = size;

    for(int i=0; i<=cardnum-2; i++)
        scanf("%d", &input[i]); //

    for(int i=0; i<=cardnum-1; i++)
        compare[i] = i+1;

    int a, b;
    
    for(a=0; a<=cardnum-2; a++){
        for(b=0; b <= cardnum-1; b++); // 한글자를 compare 이랑 비교, 10
            if(input[a] == compare[b]){
                compare[b] = 0;
            }
    }


    for(int i=0; i<=cardnum-1; i++){
        if(compare[i] != 0){
            printf("%d\n", compare[i]);
        }
    }
    return 0;
}