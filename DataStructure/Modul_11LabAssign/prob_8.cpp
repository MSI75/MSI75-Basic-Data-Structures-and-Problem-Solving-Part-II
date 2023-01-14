#include<bits/stdc++.h>
using namespace std;

vector<int> even_generator(vector<int> v) {
    vector<int> evens;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            evens.push_back(v[i]);
        }
    }
    return evens;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> evens = even_generator(v);
    for (int i = 0; i < evens.size(); i++) {
        cout << evens[i] << " ";
    }
    cout << endl;
    return 0;
}
