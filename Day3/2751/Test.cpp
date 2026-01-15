#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

// int main()
// {
//     // vector<int> vec = {5, 3, 8, 1, 2};
//     // sort(vec.begin(), vec.end());
//     // for (const auto& num : vec) {
//     //     cout << num << " ";
//     // }
//     // cout << endl;

    

//     int N;
//     cin >> N;

//     vector<int>a;
//     a.reserve(N);

//     for(int i = 0;i<N;i++)
//     {
//         int x;
//         cin>>x;
//         a.push_back(x);
//     }
//     sort(a.begin(),a.end());
//     for(int x : a)
//     {
//         cout<<x<<"\n";
//     }
//     cout<<endl;
//     return 0;
// }


// int main()
// {
//     int N;
//     cin >> N;

//     vector<pair<int,int>>a;
//     a.reserve(N);

//     for(int i = 0;i<N;i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         a.push_back({x,y});
//     }
//     sort(a.begin(),a.end());
//     for(auto p : a)
//     {
//         cout<<p.first<<" "<<p.second<<"\n";
//     }
//     cout<<endl;
//     return 0;
// }




int main()
{
    int N;
    cin >> N;
    vector<string>a;
    a.reserve(N);

    for(int i = 0;i<N;i++)
    {
        string s;
        cin>>s;
        a.push_back(s);
    }
    sort(a.begin(),a.end());
    for(auto s : a)
    {
        cout<<s<<"\n";
    }
    cout<<endl;
    return 0;
}