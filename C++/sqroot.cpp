#include <iostream>
#include <math.h>
using namespace std;
class square
{
public:
    float x;
    float squareroot(float n)
    {
        cout << "Enter a number: ";
        cin >> n;
        cout<<endl;
        x = n;
    }
    void display()
    {
        float sq;
        sq = sqrt(x);
        cout << "Sqrt("<<x<<") = " << sq << endl;
        cout<<endl;
    }
};

int main()
{
    cout << endl;
    cout << endl;
    cout << endl;
    float x;
    square s;

    s.squareroot(x);
    s.display();
    return 0;
}