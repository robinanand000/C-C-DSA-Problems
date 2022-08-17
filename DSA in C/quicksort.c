#include <stdio.h>

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void quick_sort(int *A, int n)
{

}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    display(A, n);
    quick_sort(A, n);
    display(A, n);
    return 0;
}