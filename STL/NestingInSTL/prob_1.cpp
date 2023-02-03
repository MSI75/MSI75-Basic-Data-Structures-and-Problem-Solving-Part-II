#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, multiset<string>> marks_map;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int marks;
        string name;
        cin >> name>>marks;

        // marks_map[marks].insert(name);
        marks_map[-1*marks].insert(name);

    }

    // auto curr_it = --marks_map.end();

    // while (true)
    // {
    //     auto &students = (*curr_it).second;
    //     int marks = (*curr_it).first;

    //     for (auto student : students)
    //     {
    //         cout << student << " " << marks << "\n";
    //     }

    //     if (curr_it == marks_map.begin())
    //         break;
    //     curr_it--;
    // }

    for(auto &marks_map_pr : marks_map){
        auto &students = marks_map_pr.second;
        int marks = marks_map_pr.first;

        for(auto student : students){
            cout<<student<<" "<<-1*marks<<"\n";
        }
    }
}