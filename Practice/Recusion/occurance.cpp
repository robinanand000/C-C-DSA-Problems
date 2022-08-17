#include <iostream>
using namespace std;
int first_occ(int arr[], int n, int i, int key)
{

    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    first_occ(arr, n, i + 1, key);
}

int last_occ(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int rest_array = last_occ(arr, n, i + 1, key);

    if (rest_array != -1)
    {
        return rest_array;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{

    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << "first occ: " << first_occ(arr, 7, 0, 1);
    cout << endl;
    cout << "last occ: " << last_occ(arr, 7, 0, 2);
    return 0;
}