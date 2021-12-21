#include <stdio.h>
#include <string.h>
int main(void){
    int commandN;
    scanf("%d",&commandN);
    int variable1,variable2;
    for(int i = 0;i<commandN;i++){
        char command[4];
        int variable,number,check=0;
        scanf("%s",command);
        
        if(strcmp(command,"SET")==0){
            check = 1;   
        }
        
        if(check == 1){
            scanf("%d %d",&variable,&number);
        }else{
            scanf("%d",&number);
        }
        
        if(strcmp(command,"SET")==0){
            if(variable==1){
                variable1 = number;
            }else{
                variable2 = number;
            }
        }
        
        else if(strcmp(command,"ADD")==0){
            variable2 = variable1 + number;
        }
        else if(strcmp(command,"SUB")==0){
            variable2 = variable1 - number;
        }
    }
    printf("%d %d",variable1,variable2);
}
