#include <stdio.h>

int main() {
    int arr[9];
    for(int i = 0; i < 9; i++) {
        scanf("%d",&arr[i]);
    }
    int num = arr[0];
    int tempnum = 1;
    for(int i = 0; i < 9; i++) {
        if(arr[i] > num) {
            tempnum = i + 1;
            num = arr[i];
        }
    }
    printf("%d\n%d",num,tempnum);
}