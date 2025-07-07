#include<stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", A[i]);
    }
    printf("\n");
}

 void selectionSort(int *A, int n){
     int indexOfMin, temp;
 for(int i=0; i<n-1;i++){
     indexOfMin=i;
      for(int j=1+i; j<n; j++){
         if(A[j]<A[indexOfMin]){
             indexOfMin=j;
         }
      }
 temp=A[i];
  A[i]=A[indexOfMin];
    A[indexOfMin]= temp;


 }
 }

  int main(){
    int A[] = {12, 12, 52, 63, 7, 12};
    int n = 6;
     printArray(A, n);
      selectionSort(A,n);
       printArray(A,n);
  }