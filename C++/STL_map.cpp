#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, int> marks;
    marks["Harry ="] = 98;
    marks["Robin ="] = 66;
    marks["Divya ="] = 89;

    marks.insert({{"Jack =", 69}, {"Ishita =", 10}}); //insertion of srtings.

    map<string, int>::iterator a; //iteration of maps.
    for (a = marks.begin(); a != marks.end(); a++)
    {
        cout << (*a).first << " " << (*a).second << endl;
    }
    cout << "The size is " << marks.size() << endl;
    cout << "The maximum size is " << marks.max_size() << endl;
    cout << "The empty's return  value :" << marks.empty() << endl;

    return 0;
}