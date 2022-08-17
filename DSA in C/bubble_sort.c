#include <stdio.h>

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubble_sort(int *A, int n)
{
    int temp;
    int is_sorted = 0;
    for (int i = 0; i < n - 1; i++) //for no. of passes
    {
        is_sorted = 1;
        // printf("%d", i + 1);
        for (int j = 0; j < n - 1 - i; j++) //for no. of comparisions
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                is_sorted = 0;
            }
        }
        if (is_sorted)
            return;
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    // int A[] = {1, 2, 3, 4, 5, 6};                       //for testing sorted array
    int n = 6;
    display(A, n);
    bubble_sort(A, n);
    display(A, n);

    return 0;
}