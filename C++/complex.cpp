#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        cout << "Enter the digits of a complex number :" << endl;
        cin >> v1 >> v2;
        a = v1;
        b = v2;
    }
    void printnumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }

    void setdataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void display()
    {
        cout << "Sum of complex numbers is " << a << "+ " << b << "i" << endl;
    }
};
int main()
{
    int x, y;
    complex c1, c2, c3;
    c1.setdata(x, y);
    c2.setdata(x, y);

    c1.printnumber();
    c2.printnumber();

    c3.setdataBySum(c1, c2);
    c3.display();
    return 0;
}
