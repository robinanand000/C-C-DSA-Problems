#include <iostream>
#include <math.h>
using namespace std;

class simple_calculator
{
protected:
    float num1, num2;
    int s;

public:
    void set_data1()
    {
        float a, b;
        num1 = a;
        num2 = b;
        cout << "Enter two numbers :" << endl;
        cin >> num1 >> num2;
    }

    float get_data1()
    {

        cout << "Press 1 for Addition." << endl
             << "Press 2 for Subtraction." << endl
             << "Press 3 for Multiplication." << endl
             << "Press 4 for Division." << endl;
        cin >> s;
        switch (s)
        {
        case 1:
            cout << "The result is " << num1 + num2;
            break;
        case 2:
            cout << "The result is " << num1 - num2;
            break;
        case 3:
            cout << "The result is " << num1 * num2;
            break;
        case 4:
            cout << "The result is " << num1 / num2;
            break;
        default:
            cout << "ERROR! Option not available...";
            break;
        }
    }
};

class scientific_calculator
{
protected:
    int s;
    float num, rad;

public:
    void set_data2()
    {
        float a;
        num = a;
        cout << "Enter the angle(in degrees) :";
        cin >> num;
        rad = num * (M_PI/ 180);
        cout << endl;
    }
    float get_data2()
    {
        cout << "Press 1 for Sin()." << endl
             << "Press 2 for Cos()." << endl
             << "Press 3 for Tan()." << endl
             << "Press 4 for Cot()." << endl
             << "Press 5 for Sec()." << endl
             << "Press 6 for Cosec()." << endl;
        cin >> s;
        switch (s)
        {
        case 1:
            cout << "Sin(" << num << ") = " << sin(rad);
            break;
        case 2:
            cout << "Cos(" << num << ") = " << cos(rad);
            break;
        case 3:
            cout << "Tan(" << num << ") = " << tan(rad);
            break;
        case 4:
            cout << "Cot(" << num << ") = " << sin(rad);
            break;
        case 5:
            cout << "Sec(" << num << ") = " << cos(rad);
            break;
        case 6:
            cout << "Cosec(" << num << ") = " << tan(rad);
            break;
        default:
            cout << "ERROR! Option not available...";
            break;
        }
    }
};
class hybrid_calculator : virtual public simple_calculator, virtual public scientific_calculator
{
public:
    void display()
    {
        cout << "This is a Hybrid calculator :" << endl
             << endl;
    }
};
int main()
{
    int x;
    hybrid_calculator c;
    cout << endl
         << endl;
    c.display();

    cout << "Press 1 for simple calculations:" << endl
         << "Press 2 for trigonomatric calculations:" << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        c.set_data1();
        c.get_data1();

        break;
    case 2:
        c.set_data2();
        c.get_data2();
        break;
    default:
        cout << "ERROR! Choose only from given above options...";
    }
    cout << endl;
    return 0;
}