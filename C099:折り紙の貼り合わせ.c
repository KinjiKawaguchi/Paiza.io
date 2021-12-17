#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = a*b,d;
    for(int i = 1;i<a;i++){
        scanf("%d",&d);
        c = c- d;
    }
    c = c * b;
    printf("%d",c);
}
