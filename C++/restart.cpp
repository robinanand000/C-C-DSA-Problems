#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int x;
    cout << "Press 1 for Shutdown: " << endl;
    cout << "Press 2 for Restart: " << endl;
    cout << "Press 3 for Log-Off: " << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        system("c:\\windows\\system32\\shutdown /s");
        break;
    case 2:
        system("c:\\windows\\system32\\shutdown /r");
        break;
    case 3:
        system("c:\\windows\\system32\\shutdown /l");
        break;

    default:
        break;
    }
    return 0;
}