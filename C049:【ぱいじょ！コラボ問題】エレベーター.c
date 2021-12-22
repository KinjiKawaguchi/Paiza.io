#include <stdio.h>
#include <stdlib.h>
int main(void){
    int N,B=1,A=1,total=0;
    scanf("%d",&N);
    for(int i = 0; i<N;i++){
        scanf("%d",&A);
        total += abs(A-B);
        B = A;
    }
    printf("%d",total);
}
