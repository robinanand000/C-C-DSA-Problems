#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertion_at_index(int arr[], int n, int ind, int element)
{
    for (int i = n-1; i >=ind; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[ind] = element;
}
int main()
{
    int arr[100] = {2, 26, 16, 18, 5};
    int size = 5;
    int ele = 87;
    display(arr, size);
    cout << endl;
    insertion_at_index(arr, size+1, 5, ele);
    display(arr, size + 1);

    return 0;
}