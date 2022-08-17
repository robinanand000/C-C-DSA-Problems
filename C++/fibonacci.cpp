# include<iostream>
using namespace std;

int fibo(int n){
    if(n<2){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"The fibonacci series is :"<<endl;
    for(int i=0;i<=a;i++){
       cout<<fibo(i)<<" ";
    }
    return 0;
}