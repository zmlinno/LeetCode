//
//  main.cpp
//  Days3Test
//
//  Created by 张木林 on 1/15/26.
//

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    vector<string>f;
    string a = "abcd";
    string b = "in";
    f.push_back(a);
    f.push_back(b);
    sort(f.begin(),f.end(),[](const string& s1,const string& s2){
        return s1.size()<s2.size();
    });
    for(auto e : f)
    {
        cout<<e<<" ";
    }
    return 0;
}
