#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void deletion_at_index(int arr[], int n, int ind)
{
    for (int i = ind; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {2, 26, 16, 18, 5};
    int size = 5;
    display(arr, size);
    cout << endl;
    deletion_at_index(arr, size, 4);
    size = size - 1;
    display(arr, size);
    return 0;
}