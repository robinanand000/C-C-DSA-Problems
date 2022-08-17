#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int no_of_greater(vector<int> &v, int num)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > num)
        {
            count++;
        }
    }
    return count;
}
int solve(vector<int> &vec)
{
    if (vec.empty())
    {
        return -1;
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if (no_of_greater(vec, vec[i]) == vec[i])
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v1 = {1, 1, 3, 3};
    int a = solve(v1);
    cout << a;

    return 0;
}