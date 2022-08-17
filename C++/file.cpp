#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << endl;
     string s;
    // ofstream obj;
    // obj.open("sample.txt");
    // s = "i am a good boy.";
    // obj << s;
    // obj.close();
    
    ifstream read;
    read.open("sample.txt");
    // read >> s;
    while (read.eof() == 0)
    {
        getline(read, s);
        cout << s << endl;
    }
    read.close();
    return 0;
}