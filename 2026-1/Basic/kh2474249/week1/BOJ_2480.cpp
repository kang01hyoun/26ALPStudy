#include <stdio.h>

int main() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    int res = 0;

    if (arr[0] == arr[1] && arr[1] == arr[2]) {
        res = 10000 + (arr[0] * 1000);
        printf("%d\n", res);
        return 0;

    } else if ((arr[0] == arr[1]) && arr[0] != arr[2]) {
        res = 1000 + (arr[0] * 100);
        printf("%d\n", res);
        return 0;

    } else if ((arr[0] == arr[2]) && arr[0] != arr[1]) {
        res = 1000 + (arr[0] * 100);
        printf("%d\n", res);
        return 0;

    } else if ((arr[1] == arr[2]) && arr[1] != arr[0]) {
        res = 1000 + (arr[1] * 100);
        printf("%d\n", res);
        return 0;

    } else {
        int max = 0;
        for (int i = 0; i < 3; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        res = max * 100;
        printf("%d\n", res);
        return 0;
    }
}