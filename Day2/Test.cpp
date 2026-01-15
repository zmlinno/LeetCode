#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

// int main()
// {
//     //这是确定一个最大的值
//     vector<int>numbers = {5, 3, 8, 1, 2};
//     int mx = *max_element(numbers.begin(), numbers.end());
//     cout << "The maximum element is: " << mx << endl;
//     return 0;
// }


int main()
{
    
    vector<int>numbers = {5, 3, 8, 1, 2};
    if(!numbers.empty())
    {
        int mx = *max_element(numbers.begin(), numbers.end());
        numbers.erase(remove(numbers.begin(),numbers.end(),mx),numbers.end());
        cout << "The maximum element is: " << mx << endl;

        for(int num : numbers)
        {
            cout << num << " ";
        }
        cout << endl;

    }
    
    
    return 0;
}