#include <iostream>
using namespace std;

void generate(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    int val = ch;

    string rest = s.substr(1);
    generate(rest, ans);
    generate(rest, ans + ch);
    generate(rest, ans + to_string(val));
}
int main()
{
    generate("AB", "");
    return 0;
}