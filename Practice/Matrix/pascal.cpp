#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}
vector<vector<int>> pascal(int n)
{
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++)
    {
        vector<int> v1;
        for (int j = 0; j < i + 1; j++)
        {
            int val = fact(i) / (fact(j) * fact(i - j));
            v1.push_back(val);
        }
        vec.push_back(v1);
    }
    return vec;
}
int main()
{
    int n;
    cout << "Enter no.  of rows : ";
    cin >> n;
    vector<vector<int>> p = pascal(n);
    for (int i = 0; i < n; i++)
    {
        for (int space = 1; space <= n - i; ++space)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}