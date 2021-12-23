#include <stdio.h>
int main(void){
    int N,M,which=0;
    scanf("%d",&N);
    int A[31],B[31];
    //初期化
    for(int i=0;i<=31;i++){
        A[i]=0;
        B[i]=0;
    }
    //ライブのある日と添字を一致させる
    for(int i = 0;i<N;i++){
        scanf("%d",&A[0]);
        for(int j =1;j<=31;j++) {
            if(A[0]==j) A[j]=A[0];
        }
    }
    scanf("%d",&M);
    for(int i = 0;i<M;i++){
        scanf("%d",&B[0]);
        for(int j =1;j<=31;j++) {
            if(B[0]==j) B[j]=B[0];
        }
    }
    
    //出力
    for(int i=1;i<=31;i++){
        if(A[i] == B[i]&&A[i]!=0&&B[i]!=0){
            if(which==0){
                printf("A");
                which=1;
            }else{
                printf("B");
                which = 0;
            }
        }
        else if(A[i]!=0)printf("A");
        else if(B[i]!=0)printf("B");
        else printf("x");
        if(i!=31)printf("\n");
    }
}
