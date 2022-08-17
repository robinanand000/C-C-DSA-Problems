#include <iostream>
using namespace std;

string keypad_arr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string str = keypad_arr[ch - '0'];
    string rest = s.substr(1);
    for (int i = 0; i < str.length(); i++)
    {
        keypad(rest, ans + str[i]);
    }
}
int main()
{
    keypad("23", "");
    return 0;
}