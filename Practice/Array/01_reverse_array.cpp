# include<iostream>
using namespace std;

void reverse(int *arr,int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end] =temp;
        // swap(arr[start,arr[end]]);
        start=start+1;
        end=end-1;
    }
}
void display(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,4,6,2,7,3};
    int size=6;


    display(arr,size);
    reverse(arr,size);
    display(arr,size);


    return 0;
}