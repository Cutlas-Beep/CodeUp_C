#include <stdio.h>

int main(){
    int a, c, d, r, g, b;
    int e = 0;
    scanf("%d %d %d", &r, &g, &b);
    
    for(a=0; a<r; a++)
        for(c=0; c<g; c++)
            for(d=0; d<b; d++){
                printf("%d %d %d\n", a, c, d);
                e++;
            }
    printf("%d", e);

    return 0;
}