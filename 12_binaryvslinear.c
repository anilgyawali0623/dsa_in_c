#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}

int binarySearch(int arr[], int size, int element)
{
    int mid, high, low;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {1, 3, 543, 5, 3, 5, 23, 5, 5, 6, 63, 2};
    int size = sizeof(arr) / sizeof(int);
    int searchIndex = linearSearch(arr, size, 3);

    return 0;
}