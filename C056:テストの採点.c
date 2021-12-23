#include <stdio.h>
int main(void){
    int N,M;
    scanf("%d %d",&N,&M);
    int score,absent;
    for(int i = 0; i<N;i++){
        scanf("%d %d",&score,&absent);
        score -= absent*5;
        if(score<=0)score=0;
        if(score>=M) {
            printf("%d",i+1);
            if(i!=N)printf("\n");
        }
    }
}
