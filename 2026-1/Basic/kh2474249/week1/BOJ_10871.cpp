#include <stdio.h>

int main(){
    int len;
    int max;
    scanf("%d %d",&len,&max);
    for (int i = 0; i < len; i++) {
        int tmp;
        scanf("%d",&tmp);
        if (tmp < max) {
            printf("%d ",tmp);
        }
    }
}