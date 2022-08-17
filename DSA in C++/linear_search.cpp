#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int linear_search(int arr[], int n, int e)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == e)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 7, 29, 2, 21, 17, 11, 25};
    int size = sizeof(arr) / sizeof(int);
    int element = 21;
    display(arr, size);
    cout<<endl;
    linear_search(arr, size, element);
    int ind = linear_search(arr, size, element);
    cout << "Element " << element << " was found at index " << ind << endl;

    return 0;
}