#include <stdio.h>

int n;

long long int f(int a){
    long long int ans = 1;
    for(int i=1; i<=a; i++){
        ans = ans * i;
    }
    return ans;
}

int main(){
    scanf("%d", &n);
    printf("%lld\n", f(n));
}

// int >> long long int (못함)
// long long int >> int (가능)