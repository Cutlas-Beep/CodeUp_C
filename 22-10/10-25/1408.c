#include <stdio.h>

int main(){
    char input_password[20] = {0, }; //NULL로 초기화, CHAR은 1칸에 1바이트, 0~19(size 20)
    char password1[20] = {0, };
    char password2[20] = {0, };

    scanf("%s", input_password);

    for(int i=0; i <= 19; i++){ // 0 ~ 19
        password1[i] = input_password[i];
        password2[i] = input_password[i];
    }
    for(int i=0; i <= 19; i++){
        if(password1[i] == 0x00) //null값 계산방지
            break; //조건문 탈출
        password1[i] += 2;
    }
    for(int i=0; i <= 19; i++){
        if(password2[i] == 0x00)
            break;
        password2[i] = (password2[i] * 7) % 80 + 48;
    }
    printf("%s\n%s", password1, password2);

    return 0;
}