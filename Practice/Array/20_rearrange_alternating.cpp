# include<iostream>
using namespace std;

void arrange(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (i <= n && arr[i] > 0)
        {
            i++;
        }
        while (j >= 0 && arr[j] < 0) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    int k = 0;
    while (k < n && i < n)
    {
        swap(arr[k], arr[i]);
        i++;k++;k++;
    }


}
int main() {
    int arr[] = { 1,2,-3,-4,-1,4,-6,-9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    arrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}