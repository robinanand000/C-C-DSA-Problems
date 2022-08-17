#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int sumrealcomplex(complex, complex);
    int add(int a, int b);
};

class complex
{
    friend class calculator;
    int a, b;

public:
    void setdata(int, int);
    void printnumber(int, int);
};

int calculator ::add(int a, int b)
{
    return (a + b);
}
int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}

void complex ::setdata(int v1, int v2)
{
    cout << "Enter the digits of a complex number :" << endl;
    cin >> v1 >> v2;
    a = v1;
    b = v2;
}
void complex ::printnumber(int a, int b)
{
    cout << "Your complex number is " << a << " + " << b << "i" << endl;
}

int main()
{
    complex o1,o2;
    o1.setdata(1,4);
    o2.setdata(5,7);
calculator c;
c.add(4,9); 
int res = c.sumrealcomplex(o1,o2);
cout<<"The sum of real part of o1 and o2 is "<<res<<endl;

    return 0;
}