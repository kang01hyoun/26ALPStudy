#include <stdio.h>

int main() {
    int arr[4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[j]);
        }
        int sum = 0;

        for (int k = 0; k < 4; k++) {
            sum += arr[k];
        }

        if (sum == 1) {
            printf("C\n");
        } else if (sum == 2) {
            printf("B\n");
        } else if (sum == 3) {
            printf("A\n");
        } else if (sum == 4) {
            printf("E\n");
        } else {
            printf("D\n");
        }
    }
    return 0;


}