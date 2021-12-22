#include <stdio.h>
#pragma warning(disable:4996);
int main(void) {
    int WinNumber[6], N, Select, Numberof_Win[100];
    for (int i = 0; i < 100; i++)Numberof_Win[i] = 0;
    for (int i = 0; i < 6; i++) scanf("%d", &WinNumber[i]);
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int n = 0; n < 6; n++) {
            scanf("%d", &Select);
            for (int j = 0; j < 6; j++) {
                if (WinNumber[j] == Select) Numberof_Win[i]++;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d", Numberof_Win[i]);
        if (i != N)printf("\n");
    }
}
