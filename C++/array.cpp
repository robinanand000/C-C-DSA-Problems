# include<iostream>
using namespace std;

int main(){
     int marks[4]={23,299,255,228};
    //  cout<<marks[0]<<endl;
    //  cout<<marks[1]<<endl;
    //  cout<<marks[2]<<endl;
    //  marks[3]=455;
    //  cout<<marks[3]<<endl;
    // for(int i = 0; i < 4; i++)
    // { 
    //     cout<<"The value of mark "<<i<<" is "<<marks[i]<<"."<<endl; 
    // }
    // int i=0;
    // while(i<4)
    // {
    //      cout<<"The value of mark "<<i<<" is "<<marks[i]<<"."<<endl;
    //      i++; 
    // }
    // 
    // pointers and array:
    int *p=marks;
    // cout<<"The value of mark 0 is "<<*p<<"."<<endl;
    // cout<<"The value of mark 1 is "<<*(p+1)<<"."<<endl;
    // cout<<"The value of mark 2 is "<<*(p+2)<<"."<<endl;
    // cout<<"The value of mark 3 is "<<*(p+3)<<"."<<endl;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;


      return 0;
}