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


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v(5, 0);
//     v.resize(10, 10);
//     cout << v[7] << '\n';
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v[1];
//     v[0].push_back(3);
//     v[0].push_back(3);
//     vector<int> t = v[0];
//     cout << t[0] << '\n';
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(1);
    v[0] = 9;
    v.resize(9);
    cout << v.back() << '\n';
    return 0;
}