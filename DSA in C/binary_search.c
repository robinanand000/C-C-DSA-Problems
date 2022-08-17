#include <stdio.h>

int binary_search(int arr[], int size, int element){
    int low = 0;
    int high = size - 1;

    while (low <= high){
        int mid = (low + high) / 2;
        if (arr[mid] == element){
            return mid;
        }
        if (arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {1, 5, 8, 10, 15, 27, 30, 33, 45};
    int size = sizeof(arr) / sizeof(int);
    int element = 10;
    printf("Array is : ");
    display(arr, size);
    int search_index = binary_search(arr, size, element);
    printf("Element %d was found at index %d.", element, search_index);
    return 0;
}