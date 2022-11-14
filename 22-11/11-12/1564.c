#include <stdio.h>

int a, b;
int ans;

int gcd(){
	if(b==0)return a;
	else return gcd(b, a%b);
}


int main(){
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b)); //a와 b의 최대 공약수 구하기
}