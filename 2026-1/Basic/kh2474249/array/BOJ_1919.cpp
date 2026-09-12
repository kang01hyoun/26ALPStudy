#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr1[1001];
    char arr2[1001];
    int alphabet1[26];
    int alphabet2[26];
    cin>>arr1>>arr2;
    
    for (int i = 0; i < 26; i++) {
        alphabet1[i] = 0;
        alphabet2[i] = 0;
    }

    int len1 = strlen(arr1);
    for (int i = 0; i < len1; i++) {
        alphabet1[arr1[i]-'a']++;
    }
    int len2 = strlen(arr2);
    for (int i = 0; i < len2; i++) {
        alphabet2[arr2[i]-'a']++;
    }

    int res = 0;
    for (int i = 0; i < 26; i++) {
        if (alphabet1[i] == alphabet2[i]) {
            continue;
        } else if (alphabet1[i] > alphabet2[i]) {
            res += alphabet1[i] - alphabet2[i];
        } else {
            res += alphabet2[i] - alphabet1[i];
        }
    }

    cout<<res<<endl;
    return 0;
}