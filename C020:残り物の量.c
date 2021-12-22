#include <stdio.h>
int main(void){
    double genryou,ans;
    int F,S;
    scanf("%lf %d %d",&genryou,&F,&S);
    F = 100-F;
    S = 100-S;
    ans = genryou*F*S/10000;
    printf("%lf",ans);
}
