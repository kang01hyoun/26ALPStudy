#include <algorithm>
#include <iostream>
using namespace std;
// TIP 코드를 <b>Run</b>하려면 <shortcut actionId="Run"/>을(를) 누르거나 여백에서 <icon src="AllIcons.Actions.Execute"/> 아이콘을 클릭하세요.
int main() {
    int input = 0;
    int a[100001];
    int input2 = 0;

    cin >> input;
    for (int i = 0; i < input; i++) {
        cin >> a[i];
    }
    cin >> input2;

    int idxLeft = 0;
    int idxRight = input - 1;
    int counter = 0;

    sort(a, a + input);

    while (idxLeft < idxRight) {
        int sum = a[idxLeft] + a[idxRight];
        if (sum == input2) {
            counter++;
            idxLeft++;
            idxRight--;
        } else if (sum < input2) {
            idxLeft++;
        } else {
            idxRight--;
        }
    }

    cout << counter << endl;
}