#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < n; i++) {
        if(i < a-1 || i > b-1) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
