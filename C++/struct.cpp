# include<iostream>
using namespace std;

typedef struct employee
{
    int id;
    char favchar;
    float salary;
}op;
 
int main(){
    op harry;
    harry.id=1;
    harry.favchar='c';
    harry.salary=118898;
    cout<<harry.id<<endl;
    cout<<harry.favchar<<endl;
    cout<<harry.salary<<endl;
    return 0;
}