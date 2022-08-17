# include<iostream>
using namespace std;

int maximum(int* arr, int n) {
    int max = arr[0];
    for (int i = 1;i < n;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int minimum(int* arr, int n) {
    int min = arr[0];
    for (int i = 1;i < n;i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr[] = { 2,4,5,7,1,9 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int a = maximum(arr, n);
    int b = minimum(arr, n);
    cout << a << endl;
    cout << b << endl;

    return 0;
}