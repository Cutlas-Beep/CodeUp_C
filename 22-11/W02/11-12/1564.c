#include <stdio.h>

int a, b;

int gcd(){ 
    int ans;
    if(a==b) // 두 수가 같으면
        return a;
    for(int i=1; i<a; i++){ //모든 약수를 구함  
        if(a%i==0 && b%i==0) //마지막으로 구해진 약수가 최대공약수
            ans = i;
    }
    return ans;
}

int main(){
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b)); //a와 b의 최대 공약수 구하기
    return 0;
}