# include<iostream>
using namespace std;

// int sum(int,int);
void swappointer(int* ,int*);
int main(){
    //  int num1,num2;
    //  cout<<"Enter first number:"<<endl;
    //  cin>>num1;
    //  cout<<"Enter second number"<<endl;
    //  cin>>num2;
    //  cout<<"The sum is "<<sum(num1,num2);
    // cout<<"The sum of 4and 5 is "<<sum(4,5);
    int a=4,b=5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swappointer(&a,&b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    

     return 0;
}
void swappointer(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }
