#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int,greater<int>> s;
    s.insert(5); 
    s.insert(1); 
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    cout << s.size() << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    // cout << (*s.lower_bound(2)) << endl;
    // cout << (*s.upper_bound(2)) << endl;
    int i=0;
    while (i!=2)
    {
        i++;
    }
    cout<<s[i];
    
    return 0;
}