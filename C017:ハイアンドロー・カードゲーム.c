#include <stdio.h>
int main(void){
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    for(int i =0;i<n;i++){
        int p,q;
        scanf("%d %d",&p,&q);
        if(a==p){
            if(b>q)printf("Low");
            else printf("High");
        }
        else if(a>p)printf("High");
        else printf("Low");
        if(i!=n) printf("\n");
    }
}
