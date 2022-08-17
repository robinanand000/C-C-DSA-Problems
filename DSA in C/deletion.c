#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void delete (int arr[], int size, int index)
{
    if (index > size - 1)
    {
        printf("unsuccessfull...index not available. ");
        exit(1);
    }

    else
    {
        for (int i = index; i <= size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int index;

    printf("\n");
    printf("Array : ");
    display(arr, size);
    printf("\n");

    printf("Enter the index for deletion : ");
    scanf("%d", &index);

    delete (arr, size, index);
    size = size - 1;
    printf("Array after deletion  : ");
    display(arr, size);

    return 0;
}
