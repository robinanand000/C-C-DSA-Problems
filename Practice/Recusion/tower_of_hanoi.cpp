#include <iostream>
using namespace std;
void tower(int n, char source, char helper, char dest)
{
    if (n == 0)
    {
        return;
    }
    tower(n - 1, source, dest, helper);
    cout << "Move from " << source << " to " << dest << endl;
    tower(n - 1, helper, source, dest);
}
int main()
{
    tower(3, 'A', 'B', 'C');  
    return 0;
}