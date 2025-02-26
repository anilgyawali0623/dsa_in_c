#include <stdio.h>
#include <stdlib.h>
 int insertionArr(int arr[], int index, int element, int size)
{

    for (int i = size - 1; i >= index; i--)
    {
 arr[i+1]=arr[i];
    }
    arr[index]=element;
     return 1;
     
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 6;
    int index;
    while (1)
    {
        printf("enter the index in which u want to place the element \n ");
        scanf("%d", &index);
        if (index <= size && index >= 0)
        {
            break;
        }
        printf("enter the valid index  from 0 to %d\n", size);
    }
     insertionArr(arr,index, element, size);
     size++;
   printf("the update array \n");
    for(int i=0;i<size;i++){
 printf("%d\n", arr[i]);
    }
    return 0;
}