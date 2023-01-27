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



#include<bits/stdc++.h>

using namespace std;

class node
{
public:
   int data;
   node * nxt;
};

class LinkedList
{
public:
   node * head;
   int sz;
   LinkedList()
   {
       head = NULL;
       sz=0;
   }

   //Creates a new node with data = value and nxt= NULL
   node* CreateNewNode(int value)
   {
       node *newnode = new node;
       newnode->data = value;
       newnode->nxt = NULL;
       return newnode;
   }

   // Insert new value at Head
   void InsertAtHead(int value)
   {
       sz++;
       node *a = CreateNewNode(value);
       if(head == NULL)
       {
           head = a;
           return;
       }
       //If head is not NULL
       a->nxt = head;
       head = a;
   }

   //Prints the linked list
   void Traverse()
   {
       node* a = head;
       while(a!= NULL)
       {
           cout<<a->data<<" ";
           a = a->nxt;
       }
       cout<<"\n";
   }

   //Search for a single value
   int SearchDistinctValue(int value)
   {
       node* a = head;
       int index = 0;
       while(a!= NULL)
       {
           if(a->data==value)
           {
               return index;
           }
           a = a->nxt;
           index++;
       }
       return -1;
   }

   //Search all possible occurrence
   void SearchAllValue(int value)
   {
       node* a = head;
       int index = 0;
       while(a!= NULL)
       {
           if(a->data==value)
           {
               cout<<value<<" is found at index "<<index<<"\n";
           }
           a = a->nxt;
           index++;
       }
   }

   //Returns number of elements in the linked list
   int getSize()
   {
       //O(1)
       return sz;


       //O(size of linked list) = O(n)
//        int sz = 0;
//        node *a = head;
//        while(a!=NULL)
//        {
//            sz++;
//            a = a->nxt;
//        }
//        return sz;
   }

   //Insert a value at the given index
   void InsertAtAnyIndex(int index, int value)
   {
       if(index <0 || index > sz)
       {
           return;
       }
       if(index==0)
       {
           InsertAtHead(value);
           return;
       }
       sz++;
       node *a = head;
       int cur_index = 0;
       while(cur_index!=index-1)
       {
           a = a->nxt;
           cur_index++;
       }
       node *newnode = CreateNewNode(value);
       newnode->nxt = a->nxt;
       a->nxt = newnode;
   }

   //Delete the first element of a linked list
   void DeleteAtHead()
   {
       if(head == NULL)
       {
           return;
       }
       sz--;
       node *a = head;
       head = a->nxt;
       delete a;
   }

   //Delete the value at the given index
   void DeleteAnyIndex(int index)
   {
       if(index <0 || index > sz-1)
       {
           return;
       }
       if(index==0)
       {
           DeleteAtHead();
           return;
       }
       sz--;
       node *a = head;
       int cur_index = 0;
       while(cur_index != index-1)
       {
           a = a->nxt;
           cur_index++;
       }
       node *b = a->nxt;
       a->nxt = b->nxt;
       delete b;
   }

   void InsertAfterValue(int value , int data)
   {
       node *a = head;
       while(a != NULL)
       {
           if(a->data == value)
           {
               break;
           }
           a = a->nxt;
       }
       if(a== NULL)
       {
           cout<<value<<" doesn't exist in linked-list.\n";
           return;
       }
       sz++;
       node *newnode = CreateNewNode(data);
       newnode->nxt = a->nxt;
       a->nxt = newnode;
   }

   //Print the Reverse Order from node a to last
   void ReversePrint2(node *a)
   {
       if(a==NULL)
       {
           return;
       }
       ReversePrint2(a->nxt);
       cout<<a->data<<" ";
   }
   void ReversePrint()
   {
       ReversePrint2(head);
       cout<<"\n";
   }

   int getLast(){
       if(head==NULL)
       return -1;

       node *a = head;

       while(a->nxt){
           a = a->nxt;
       }
       return a->data;
   }

   double getAverage(){
       node *a = head;

       float sum = 0;
       while(a!=NULL){
           sum += a->data;
           a = a->nxt;
       }
       double avg = sum/getSize();
      return avg;
   }

};

int main()
{
   LinkedList l;
   l.InsertAtHead(7);
   l.InsertAtHead(4);
   l.InsertAtHead(6);
   l.InsertAtHead(2);
   l.InsertAtHead(3);
   l.Traverse();
   cout<<l.getLast()<<"\n";
   cout<<l.getAverage()<<"\n";
   l.ReversePrint();
   l.Traverse();
   return 0;
}



