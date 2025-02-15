#include <stdio.h>

int insertion(int arr[], int index, int size, int element)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5}; // Increased size to accommodate new elements
    int index;
    int element = 6;
    int size = 5; // Current number of elements

    while (1)
    {
        printf("Enter the index for the insertion (0-%d):\n", size);
        scanf("%d", &index);
        if (index >= 0 && index <= size)
        {
            break;
        }
        printf("Index should be in range 0 to %d. Try again.\n", size);
    }

    insertion(arr, index, size, element);
    size++; // Increase size after insertion

    printf("Updated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
