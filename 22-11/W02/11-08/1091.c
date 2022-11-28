#include <stdio.h>

int main(){
    long long int sta, x, plus, num;
    scanf("%lld %lld %lld %lld", &sta, &x, &plus, &num);
    for(int i=1; i < num; i++){
        sta *= x;
        sta += plus;
    }
    printf("%lld", sta);
}