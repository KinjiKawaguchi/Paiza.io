#include <stdio.h>
#include<string.h>
int main(void){
    char buf[100];
    scanf("%s",buf);
    int a = strlen(buf);
    for(int i = 0;i<=2;i++){
        if(i==0||i==2){
            for(int j =0;j<a+2;j++){
                printf("+");
            }
        }else{
            printf("+");
            printf("%s",buf);
            printf("+");
        }
        if(i!=2)printf("\n");
    }
}
