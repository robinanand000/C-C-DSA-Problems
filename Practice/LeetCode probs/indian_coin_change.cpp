#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int x, n;
    n = a.size();
    cout << "Enter the amount : ";
    cin >> x;

    sort(a.begin(), a.end(), greater<int>());
    set<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (x >= a[i])
        {
            ans += x / a[i];
            x -= (x / a[i]) * a[i];
            s.insert(a[i]);
        }
    }
    cout << ans << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}
