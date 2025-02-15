#include <stdio.h>

void intDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {1, 2, 34, 4, 5};
    int size = 5, index = 3;
    intDeletion(arr, size, index);
    size -= 1;

    return 0;
}