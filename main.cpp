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

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v(1);
//     v[0] = 9;
//     v.resize(9);
//     cout << v.back() << '\n';
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// const int INF = 1000000;

// int n, m, S, T;
// vector<pair<int, int>> graph[20005];
// int dist[20005];
// bool visited[20005];

// void Dijkstra(int start) {
//     memset(dist, 0x3f, sizeof(dist));
//     memset(visited, false, sizeof(visited));
//     dist[start] = 0;
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//     pq.push({0, start});
//     while (!pq.empty()) {
//         int cur = pq.top().second;
//         pq.pop();
//         if (visited[cur]) continue;
//         visited[cur] = true;
//         for (auto e : graph[cur]) {
//             int next = e.first, weight = e.second;
//             if (dist[next] > dist[cur] + weight) {
//                 dist[next] = dist[cur] + weight;
//                 pq.push({dist[next], next});
//             }
//         }
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     for (int i = 1; i <= t; i++) {
//         cin >> n >> m >> S >> T;
//         for (int j = 0; j < n; j++)
//             graph[j].clear();
//         for (int j = 0; j < m; j++) {
//             int u, v, w;
//             cin >> u >> v >> w;
//             graph[u].push_back({v, w});
//             graph[v].push_back({u, w});
//         }
//         Dijkstra(S);
//         cout << "Case #" << i << ": ";
//         if (dist[T] == INF) {
//             cout << "unreachable" << endl;

//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int T, n, m, q, k, x, ans;
// vector<vector<int>> transition, query;
// string state;

// int main() {
//     cin >> T;
//     for (int i = 1; i <= T; i++) {
//         cin >> n >> m;
//         transition.assign(n, vector<int>(m));
//         for (int j = 0; j < m; j++) {
//             cin >> k;
//             while (k--) {
//                 cin >> x;
//                 transition[x][j] = 1;
//             }
//         }
//         cin >> q;
//         cout << "Case " << i << ":" << endl;
//         while (q--) {
//             cin >> state;
//             query.assign(1, vector<int>(n));
//             for (int j = 0; j < n; j++)
//                 query[0][j] = state[j] - '0';
//             ans = 0;
//             for (int j = 0; j < m; j++) {
//                 int cnt = 0;
//                 for (int k = 0; k < n; k++)
//                     if (query[0][k] && !transition[k][j])
//                         cnt++;
//                 if (cnt == n) {
//                     ans = -1;
//                     break;
//                 }
//                 if (cnt < n) {
//                     ans++;
//                     for (int k = 0; k < n; k++)
//                         query[0][k] ^= transition[k][j];
//                 }
//             }
//             cout << ans << endl;
//         }
//         if (i < T)
//             cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// const int MAXN = 15, MAXM = 40;

// int T, n, m, q;
// vector<int> buttons[MAXM];

// int main() {
//     cin >> T;
//     for (int t = 1; t <= T; t++) {
//         cin >> n >> m;

//         // Initialize transition matrix
//         vector<vector<int>> trans(n, vector<int>(m));
//         for (int i = 0; i < m; i++) {
//             int k;
//             cin >> k;
//             buttons[i].resize(k);
//             for (int j = 0; j < k; j++) {
//                 cin >> buttons[i][j];
//                 trans[buttons[i][j]][i] = 1;
//             }
//         }

//         cin >> q;
//         cout << "Case " << t << ":\n";
//         for (int i = 0; i < q; i++) {
//             string state;
//             cin >> state;

//             // Initialize matrix for initial state
//             vector<vector<int>> mat(1, vector<int>(n));
//             for (int j = 0; j < n; j++) {
//                 mat[0][j] = state[j] - '0';
//             }

//             // Perform matrix multiplication on transition matrix and initial state
//             vector<vector<int>> ans = mat;
//             for (int j = 0; j < m; j++) {
//                 vector<vector<int>> temp(ans.size(), vector<int>(n));
//                 for (int k = 0; k < ans.size(); k++) {
//                     for (int l = 0; l < n; l++) {
//                         for (int p = 0; p < n; p++) {
//                             temp[k][l] += ans[k][p] * trans[p][j];
//                         }
//                     }
//                 }
//                 ans = temp;
//             }

//             // Count number of non-zero elements in final state matrix
//             int cnt = 0;
//             for (int j = 0; j < ans.size(); j++) {
//                 for (int k = 0; k < n; k++) {
//                     if (ans[j][k] != 0) cnt++;
//                 }
//             }

//             // Print minimum number of button presses or -1 if state is not reachable
//             if (cnt == n) cout << cnt << endl;
//             else cout << -1 << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to find the minimum number of button presses needed to reach the desired state
// int minPresses(vector<vector<int>> &transition, vector<int> &state) {
//     vector<int> current = state; // Initialize the current state to the desired state
//     int pressCount = 0; // Initialize the number of button presses to 0
//     for (int i = 0; i < transition.size(); i++) { // Iterate through the transition matrix
//         for (int j = 0; j < transition[i].size(); j++) { // Iterate through the columns of the transition matrix
//             if (transition[i][j] == 1 && current[i] == 0) { // If the button press changes the state of the light and the light is currently off
//                 current[i] = 1; // Change the state of the light
//                 pressCount++; // Increment the number of button presses
//             }
//             else if (transition[i][j] == 1 && current[i] == 1) { // If the button press changes the state of the light and the light is currently on
//                 current[i] = 0; // Change the state of the light
//                 pressCount++; // Increment the number of button presses
//             }
//         }
//     }
//     for (int i = 0; i < current.size(); i++) { // Check if all lights are in the desired state
//         if (current[i] == state[i]) {
//             return -1; // If not, return -1
//         }
//     }
//     return pressCount; // Otherwise, return the number of button presses
// }

// int main() {
//     int T; // Number of test cases
//     cin >> T;
//     for (int t = 1; t <= T; t++) {
//         int n, m, k, q; // Number of tube lights, buttons, and queries
//         cin >> n >> m;
//         vector<vector<int>> transition(n, vector<int>(m)); // Initialize the transition matrix
//         for (int i = 0; i < m; i++) { // Read in the list of tube lights that change states for each button
//             cin >> k;
//             for (int j = 0; j < k; j++) {
//                 int light;
//                 cin >> light;
//                 transition[light][i] = 1; // Update the transition matrix
//             }
//         }
//         cin >> q;
//         cout << "Case " << t << ":" << endl;
//         for (int i = 0; i < q; i++) {
//             string stateStr;
//             cin >> stateStr;
//             vector<int> state(n); // Initialize the desired state
//             for (int j = 0; j < n; j++) {
//                 state[j] = stateStr[j] - '0'; // Convert the binary string to an integer array
//             }
//             int pressCount = minPresses(transition, state); // Find the minimum number of button presses
//             cout << pressCount << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int print(int n)
// {
//     if(n==0)
//         return 0;

//     cout<<n<<" ";

//     print(n-1);
// }
// int main(){

//   print(5);

//   return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;
// #include<stdio.h>

// int print(int n)
// {
//     if(n==0)
//         return 0;
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
//   print(5);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     vector<int> v(5);
//     v[(v.size() - 1) * v.back()] *= 1;
//     cout << v.back() << '\n';
//     return 0;
// }

// #include <iostream>

// using namespace std;
// template <typename T>
// T Sum(T p, T q)
// {
//     return p+q;
// }
// int main ()
// {
//     int x = 55, y = 60, result;

//     result = Sum<int>(x, y);

//     cout << result << endl;
//     return 0;
// }

// #include <iostream>

// using namespace std;
// template <typename INT,typename FLOAT>
// FLOAT Sum(INT p, FLOAT q)
// {
//     return p+q;
// }
// int main ()
// {
//     int x = 55;
//     float result,y = 60.55;
//     result = Sum<int,float>(x, y);
//     cout << result << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// template<class T>
// class Stack{
//     T *arr;
//     int stack_size;
//     int cap_arr;
//     public:
//     int size;
//     Stack(){
//         arr = new T[1];
//         stack_size = 0;
//         cap_arr = 1;
//         size = 0;
//     }
//     void inrease(){
//         T *temp;
//         temp = new T[cap_arr*2];
//         for(int i = 0; i<cap_arr; i++){
//             temp[i] = arr[i];
//         }
//         cap_arr = cap_arr*2;
//     }

//     void push(T value){
//         size++;
//         if(stack_size>cap_arr){
//             inrease();
//         }
//         stack_size = stack_size + 1;
//         arr[stack_size-1] = value;
//     }

//     void pop(){
//         if(stack_size==0){
//             cout<<"Stack is empty!\n";
//             return;
//         }
//         size--;
//         stack_size = stack_size - 1;
//     }

//     void top(){
//         if(stack_size==0){
//             cout<<"Stack is empty!\n";
//             return;
//         }
//         cout<<arr[stack_size-1]<<"\n";
//     }
// };

// int main(){
//     Stack<char>st;
//     st.push('A');
//     st.push('B');
//     st.push('C');
//     while(st.size>0){
//         st.top();
//         st.pop();
//     }

//     Stack<int>st1;
//     st1.push(7);
//     st1.push(5);
//     st1.push(6);
//     while (st1.size>0)
//     {
//         st1.top();
//         st1.pop();
//     }

//     Stack<double>st3;
//     st3.push(3.45);
//     st3.push(9.32);
//     st3.push(4.57);

//     while(st3.size>0){
//         st3.top();
//         st3.pop();
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;
//     for (int i = 1;i <= 5;i++)
//         v.push_back(i * i);
//     cout << v[1];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     map<int,int>mp;
//     mp[0] = 11;
//     mp[1] = 15;
//     mp[2] = 25;
//     // auto p = mp.find(0);
//     // cout<<p->second<<"\n";
//     return 0;
// }

// class Node {
//      float data;
//     char ch;
//     Node* next;
//     Node* next_to_next;
// public:

//     // Constructor to initialize the node
//     Node(float val, char c) {
//         data = val;
//         ch = c;
//         next = NULL;
//         next_to_next = NULL;
//     }
// };

// class Node {
// public:
//     float val;
//     char ch;
//     Node* next;
//     Node* next_to_next;
// };

// #include<iostream>
// using namespace std;
// int main(){
//     int p = NULL;
//     cout<<p<<"\n";
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         string valid = "meow";

//         // we will compress our string
//         string compress = "";

//         char ch = '#';

//         for (int i = 0; i < n; ++i)
//         {

//             // val store the differnece between ASCII value
//             // differece between any Lower_case and Upper_case character is 32
//             //'a' - 'A' = 32, 'b' - B = 32
//             // so if val is not 32 it means they are different

//             int val = abs(ch - s[i]);

//             // whenver the character will match with our current
//             // character we will don nothing
//             if (ch == s[i] || val == 32)
//                 continue;
//             else
//             {
//                 // we will add current character to compress string
//                 compress += s[i];

//                 // change our current character to s[i]
//                 ch = s[i];
//             }
//         }

//         cout << compress << "\n";

//         int f = 0;

//         if (compress.size() != valid.size())
//         {
//             cout << "NO\n";
//             continue;
//         }

//         for (int i = 0; i < 4; ++i)
//         {
//             int val = abs(compress[i] - valid[i]);

//             if (val != 32 && val != 0)
//             {
//                 f = 1;
//                 break;
//             }
//         }

//         if (f)
//             cout << "NO\n";
//         else
//             cout << "YES\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> small(26), big(26);
        for (auto &x : s)
        {

            if ('a' <= x && x <= 'z')
            {
                small[x - 'a']++;
            }
            else
                big[x - 'A']++;
        }

        int ans = 0;

        for (int i = 0; i < 26; ++i)
        {
            int x = small[i];
            int y = big[i];

            int mn = min(x, y);
            ans += mn;
            x -= mn;
            y -= mn;

            if (x == 0)
                x = y;

            int more = (x / 2);
            more = min(more, k);
            k -= more;
            ans += more;
        }

        cout << ans << "\n";
    }
}
