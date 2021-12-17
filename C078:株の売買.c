#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d,profit=0,number=0;
    for(int i=1;i<=a;i++){
        scanf("%d",&d);
        if(d<=b){
            profit = profit - d;
            number++;
        }
        if(d>=c){
            if(number!=0)profit = profit + number * d;
            number = 0;
        }
    }
    if(number!=0)profit = profit + number * d;
    printf("%d",profit);
}
