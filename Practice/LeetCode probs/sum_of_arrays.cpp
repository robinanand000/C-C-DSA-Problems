#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sumofTwoArray(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();

    int i = n1 - 1;
    int j = n2 - 1;
    int carry = 0;\
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int sum = v1[i] + v2[j] + carry;
        if (sum % 10 != 0)
        {
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
        }
        else
        {
            ans.push_back(sum);
        }
        i--;
        j--;
    }
    if (carry != 0)
    {
        ans.push_back(carry);
    }
    for(int k=ans.size()-1;k>=0;k--){
        cout<<ans[k];
    }
}
int main()
{
    vector<int> v1 = {7, 5, 6};
    vector<int> v2 = {3, 8, 5};
    sumofTwoArray(v1, v2);

    return 0;
}