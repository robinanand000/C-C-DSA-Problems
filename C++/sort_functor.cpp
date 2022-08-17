#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    cout << endl;
    int arr[6] = {1, 89, 42, 34, 72, 9};
    // sort(arr, arr + 6);                             //ascending order.
    sort(arr,arr+6 ,greater<int>());                   //decending order.
    for (int i = 0; i < 6; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}