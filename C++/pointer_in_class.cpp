#include <iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout << "base class member is called.";
    }
};

class derived : public base
{
public:
    void display()
    {
        cout << "derived class member is called.";
    }
};

int main()
{
    cout << endl;
    base *ptr;
    base obj_base;
    derived obj_derived;

    ptr = &obj_derived;
    // ptr->display();
    derived *ptr2;
    ptr2 = &obj_derived;
    ptr2->display();

    return 0;
}