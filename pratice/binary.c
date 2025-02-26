/*
alog
 array is given
  find the midpoint index of that array
  low will be 0 as the index which we will start will be zero high will be size -1
   loop  low<=high
   mid = (low+high)/2
    if we find the element at the mid index then return the 1 n no need to loop further
    else
    arr[mid]<element
    if array mid element is less than element which mean element lies in high side right of mid
    so update the low mid+1
     mid ko aarko index bata feri lopp suru hunxa
     but if arr[mid]>element
      which means element lies in left side
      so high=mid-1
       yo garda gardai arr[mid] ma vetine chance hunxa natra xaina


*/

int binarySearch(int arr[], int element, int size)
{
    int low = 0;
    int high = size - 1;
    int mid;
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
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
    }
     return -1;
}
#include <stdio.h>
int main()
{
    int arr[] = {1, 4, 6, 9, 12, 15, 28, 36, 75, 89};
    int size = sizeof(arr) / sizeof(int);
    int element = 12;
    int index=binarySearch(arr,element,size);
      printf("%d\n",index);
}