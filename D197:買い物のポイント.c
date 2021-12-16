#include <stdio.h>
int main(void){
    int a,b=0;
    scanf("%d",&a);
    if(a>=1000){
        b = a * 0.1;
    }
    printf("%d",b);
}
