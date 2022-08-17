#include <iostream>
using namespace std;
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int);
    void display(void);
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int);
    void display(void);
};

void c1::indata(int a)
{
    cout << endl;
    val1 = a;
    cout << "The value of c1 before exchange is :" << val1 << endl;
}
void c1::display(void)
{
    cout << val1 << endl;
}

void c2::indata(int a)
{
    val2 = a;
    cout << "The value of c2 before exchange is :" << val2 << endl
         << endl;
}
void c2::display(void)
{
    cout << val2 << endl;
}

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;
    oc1.indata(42);
    oc2.indata(65);
    exchange(oc1, oc2);
    cout << "The value of c1 after exchange is :";
    oc1.display();
    cout << "The value of c2 after exchange is :";
    oc2.display();
    return 0;
}