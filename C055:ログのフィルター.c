#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(void) {
    int N,Numberof_Output=0;
    char G[101];
    scanf("%d %s", &N, G);
    for (int i = 0; i < N; i++) {
        char input[101];
        scanf("%s", input);
        if (strstr(input, G) != NULL) {
            printf("%s", input);
            if (i != N - 1) printf("\n");
            Numberof_Output++;
        }
    }
    if(Numberof_Output==0) printf("None");
}
