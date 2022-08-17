#include <stdio.h>

int linear_search(int arr[], int size, int element){
    for (int i = 0; i < size; i++){
        if (arr[i] == element){
            return i;
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
    int arr[7] = {1, 5, 45, 32, 66, 22, 44};
    int size = sizeof(arr) / sizeof(int);
    int element = 45;
    printf("Array is : ");
    display(arr, size);
    int search_index = linear_search(arr, size, element);
    printf("Element %d was found at index %d.", element, search_index);

    return 0;
}