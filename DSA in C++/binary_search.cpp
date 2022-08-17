#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int binary_search(int arr[], int n, int e)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (e == arr[mid])
        {
            return mid;
        }
        if (e > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 6, 9, 11, 14, 18, 19, 21, 25, 29};
    int size = sizeof(arr) / sizeof(int);
    int element = 21;
    display(arr, size);
    cout << endl;
    binary_search(arr, size, element);
    int ind = binary_search(arr, size, element);
    cout << "Element " << element << " was found at index " << ind << endl;
    return 0;
}