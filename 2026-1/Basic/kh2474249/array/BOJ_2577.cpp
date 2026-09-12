#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char resarr[30];
    int ctarr[10] = {0,0,0,0,0,0,0,0,0,0};
    int A, B, C;
    scanf("%d %d %d",&A,&B,&C);
    long long result = (long long)A * B * C;
    sprintf(resarr, "%lld", result);
    for (int i = 0; i < strlen(resarr); i++) {
        int tmp = resarr[i] - '0';
        ctarr[tmp]++;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",ctarr[i]);
    }
}