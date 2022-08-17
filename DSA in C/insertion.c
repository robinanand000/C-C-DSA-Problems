#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int insert(int arr[], int size, int element, int index)
{
    if (index > size)
    {
        printf("unsuccessfull...index not available. ");
        exit(1);
    }

    else if(index < size)
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
     else
    {
    arr[index] = element;
    }
}
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int element, index;

    printf("\n");
    printf("Array : ");
    display(arr, size);
    printf("\n");

    printf("Enter the new element for insertion : ");
    scanf("%d", &element);
    printf("Enter the index : ");
    scanf("%d", &index);

    insert(arr, size, element, index);
    size = size + 1;
    printf("Array after insertion  : ");
    display(arr, size);

    return 0;
}
