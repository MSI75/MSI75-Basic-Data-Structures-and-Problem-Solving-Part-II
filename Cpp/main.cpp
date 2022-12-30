// #include<iostream>
// using namespace std;

// int main()
// {
//     double num = 3.14162835;
//     cout<<
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s="abcde";
//     s.erase(s.begin()+(2-2));

//     cout << s << '\n';
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v= {2,9,1,3,7};

//     sort(v.begin()+1,v.begin()+3);

//     for(int i=0; i<v.size(); i++)
//         cout << v[i] << " ";
//     cout << '\n';
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="2997";
//     s+="11";
//     cout << s.size() << '\n';

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v= {2,5,1,9,7};
//     reverse(v.begin(),v.end());

//     for(int i=0; i<v.size(); i++)
//         cout << v[i] << " ";
//     cout << '\n';
//     return 0;
// }

#include <stdio.h>
 
int main()
{
    long long n;
    scanf("%lld", &n);
    int i = 1;
    while (n > 1)
    {
        printf("%lld ", n);
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        i++;
    }
    printf("%lld", n);
    return 0;
}