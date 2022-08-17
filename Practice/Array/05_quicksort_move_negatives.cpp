# include<iostream>
using namespace std;
void display(int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int* arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }



    } while (i < j);
    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
    return j;
}

void quicksort(int* arr, int low, int high) {
    int partition_index;
    if (low < high) {
        partition_index = partition(arr, low, high);
        quicksort(arr, low, partition_index - 1);
        quicksort(arr, partition_index + 1, high);
    }
}
int main() {
    int arr[] = { -12,11,-13,-5,6,-7,5,-3,-6 };
    // int arr[] = { 2,6,8,5,7,9 };
    int n = sizeof(arr) / sizeof(arr[0]);

    display(arr, n);
    quicksort(arr, 0, n - 1);
    display(arr, n);
    return 0;
}