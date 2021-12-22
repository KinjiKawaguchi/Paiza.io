#include <stdio.h>
int main(void){
    int xc,yc,r_1,r_2,N;
    scanf("%d %d %d %d %d",&xc,&yc,&r_1,&r_2,&N);
    for(int i = 0;i<N;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        int now = (x-xc)*(x-xc)+(y-yc)*(y-yc);
        if(r_1*r_1 <= now && now <= r_2 * r_2){
            printf("yes");
        }else{
            printf("no");
        }
        if(i!=N)printf("\n");
    }
}
