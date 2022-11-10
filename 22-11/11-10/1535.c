#include <stdio.h>

int n, d[110]; //n는 array size, d

int f(){
    int king = 0, king_num = 0;
    for(int i=0; i<n; i++){
        if(king<d[i]){
            king = d[i];
            king_num = i;
        }
    }
    return king_num+1;
}

int main()
{
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &d[i]);

    printf("%d", f());
    return 0;
}