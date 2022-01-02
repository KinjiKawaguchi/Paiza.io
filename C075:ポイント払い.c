#include <stdio.h>
int main(void){
    int N=0,M,P=0;
    scanf("%d %d",&N,&M);
    for(int i = 0;i<M;i++){
        int f;
        scanf("%d",&f);
        if(P>=f)P -= f;
        else{
            N-=f;
            P+=f*0.1;
        }
        printf("%d %d",N,P);
        if(i!=N)printf("\n");
    }
}
