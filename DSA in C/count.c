#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void count_sort(int *arr, int n)
{
    int i, j;
    int max = maximum(arr, n);
    int *count = (int *)malloc((max + 1) * sizeof(int));
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    i = 0;
    j = 0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            count[i] = count[i] - 1;
            arr[j] = i;
            j++;
        }
        i++;
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    display(A, n);
    count_sort(A, n);
    display(A, n);
    return 0;
}