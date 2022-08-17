#include <iostream>
using namespace std;
string remove_dup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = remove_dup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}
int main()
{
    cout << remove_dup("aaaabbbeeecddd") << endl;
    return 0;
}