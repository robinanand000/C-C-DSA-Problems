#include <iostream>
#include <list>
using namespace std;
void display(list<int> &l)
{ //displaying the elements of a list..

    list<int>::iterator a;
    a = l.begin();
    for (a = l.begin(); a != l.end(); a++)
    {
        cout << *a << " ";
    }
}
int main()
{
    cout<<endl;
    list<int> list1; //empty list
    list1.push_back(1);
    list1.push_back(22);
    list1.push_back(4); //list1(method1)
    list1.push_back(61);
    list1.push_back(81);
    list1.push_back(11);

    list<int> list2(3); //list size =3
    list<int>::iterator b;
    b = list2.begin(); //list2(method2)
    *b = 49;
    b++;
    *b = 80;
    b++;
    *b = 99;
    b++;

    display(list1);
    cout << endl;                                        // list1.pop_back();//deleting an element from back..
    display(list2);
    cout<<endl;

    list1.merge(list2);
    cout << "List1 after merging :" << endl;

    display(list1);
    cout<<endl;
    cout << "List1 after merging and sorting both :" << endl;
    list1.sort();                                           //sorting  a list..and can be aclled as ascending order..
    display(list1);
    cout<<endl;

    cout << "List1 after merging, sorting and reversing :" << endl;

    list1.reverse();                //reversing the list..and can be called as decending order.
    display(list1);

    return 0;
}