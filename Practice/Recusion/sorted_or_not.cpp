#include <iostream>
using namespace std;

bool is_sort(int arr[], int n)
{

    if (n == 1)
    {
        return true;
    }
    bool rest_array = is_sort(arr + 1, n - 1);
    return (arr[0] < arr[1] && rest_array);
}

int main()
{
    int arr[] = {1, 6, 3, 4, 5};
    cout << is_sort(arr, 5);
    return 0;
}