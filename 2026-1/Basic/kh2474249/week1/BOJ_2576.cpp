#include <stdio.h>

int main() {
    int arr[7];
    int min = 999;
    int sum = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 0) {
            continue;
        }
        else {
            sum += arr[i];
            if (min > arr[i]) {
                min = arr[i];
            }
        }
    }

    if (sum == 0) {
        printf("-1");
        return 0;
    } else {
        printf("%d\n",sum);
        printf("%d\n",min);
    }

    return 0;
}