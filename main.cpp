// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v(5, 2);
//     for (int i = 0;i < 5 - 2;i++)
//         v[i] = i;
//     for (int i = 0;i < 5;i++)
//         cout << v[i] << " ";
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v(5,0);
//     v[1] = 5;
//     cout << v.front() << '\n';
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5, 0);
    v.resize(10, 10);
    cout << v[7] << '\n';
    return 0;
}