#include <stdio.h>
int num;

int two(int num){
	if(num < 1)
		return 0;

	two(num/2); //재귀
	printf("%d",num%2); 
	
}
//니애미니애미니애미니애미니애미니애미니애민애미내이내이매니애님재미애니내이미애니이냄ㅇ
int main(){
	int n;
	
	scanf("%d",&n);
	if(n > 0)
		two(n);
	else
		printf("0");
	return 0;
}
