#include <stdio.h>
// 1+2+3+4+....= n(n+1)/2

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", A[i]);
    }
     printf("\n");
}

void bubbleSort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    { // for the passes
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        { // for comparison in each passes

            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{

    int A[] = {12, 3, 5, 6, 7, 34};
    int n = 6;
    printArray(A, n);

    bubbleSort(A, n); // function to sort the array
    printArray(A, n);
}