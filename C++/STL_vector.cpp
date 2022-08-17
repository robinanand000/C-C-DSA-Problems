# include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector <int> vec1;
    int element,size;

    cout<<"Enter the size of vector :";
    cin>>size;

    for( int i =0; i<size; i++){
        cout<<"Enter the new element to add to this vector :";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
     display(vec1);
    //to insert a element in vector..
    // vector<int> :: iterator a= vec1.end();
    // vec1.insert(a, 200);
    // display(vec1);
    return 0;
}