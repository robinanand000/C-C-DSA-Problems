#include <iostream>
using namespace std;

void inc(int n)
{
    if (n == 0)
    {
        return;
    }

    inc(n - 1);
    cout << n << endl;
}
void dec(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    dec(n - 1);
}
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    inc(n);
    cout << endl;
    dec(n);
    return 0;
}