#include <stdio.h>
int main(void){
    int Number,A,B;
    scanf("%d %d %d",&Number,&A,&B);
    for(int i=1;i<=Number;i++){
        if(i%A==0&&i%B==0) printf("AB");
        else if(i%A==0) printf("A");
        else if(i%B==0) printf("B");
        else printf("N");
        if(i!=Number) printf("\n");
    }
    return 0;
}
