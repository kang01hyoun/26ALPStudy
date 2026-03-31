#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char string[101];
    int arr[26];
    for(int i = 0; i < 26; i++){
        arr[i] = 0;
    }
    cin>>string;
    int len = strlen(string);
    for(int i = 0; i < len; i++) {
        arr[string[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        cout<<arr[i]<<" ";
    }
}