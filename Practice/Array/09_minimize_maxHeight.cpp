# include<iostream>
using namespace std;

int getmin_diff(int* arr, int n, int k) {
    int min = arr[0] + k;
    int i = n - 1;
    int val;
    while (i > 0) {
        if ((arr[i] - k - min) < 0) {
            arr[i] = arr[i - 1];
            i--;
        }
    }
    val = arr[i] - k - min;
    return val;
}
int main() {
    int arr[] = { 1,2,3,10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int x = getmin_diff(arr, n, k);
    cout << x;
    return 0;
}