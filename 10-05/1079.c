#include <stdio.h>

int main(){
    char c;
    while(c != 0x71){
        scanf("%c ", &c);
        printf("%c\n", c);
    }
    return 0;
}