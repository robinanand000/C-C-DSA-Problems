#include <stdio.h>

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selection_sort(int *A, int n)
{
    int min_ind, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min_ind = i;
        for (int j = i + 1; j < n; j++)
        { 
            if (A[j] < A[min_ind])
            {
                min_ind = j;
            }
        }
        temp = A[min_ind];
        A[min_ind] = A[i];
        A[i] = temp;
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    display(A, n);
    selection_sort(A, n);
    display(A, n);
    return 0;
}