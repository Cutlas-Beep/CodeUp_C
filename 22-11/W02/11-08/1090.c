#include <stdio.h>

int main(){
    long long int sta, num, end;
    scanf("%lld %lld %lld", &sta, &num, &end);
    for(int i=1; i<end; i++){
        sta*=num;
    }
    printf("%lld", sta);
    return 0;
}