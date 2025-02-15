// // a pointer is a variable which stores the address of another variables

// #include <stdio.h>
//  void swap(int *a, int *b);
//   void swap(int *a, int *b){
//      int temp;
//       temp= *a;
//       *a=*b;
//        *b= temp;
//   }
// int main()
// {
//  int a=3, b=4;
//  printf("the value of x and y is %d and %d\n",a,b);
// swap(&a, &b);
//  printf("after swapping %d %d", a,b);

//     int i = 34;
//     int *j = &i;
//     printf("the value of i is %d\n", i);
//     printf("the value of i is %d\n", *j);
//     printf("the address of i is %u\n", &i);
//     printf("the address of i is %u\
//             n",
//            j);
//     printf("the address of j is %u\n", &j);
//  printf("the value of j is %d", j);
// //  pointer to a pointer
//  int **r;
//  r=&j;

//     return 0;
// }

//  #include<stdio.h>
//   int main(){
//      int a=2;
//       int *b=&a;
//        printf("the value of b is %d \n", b);
//        printf("the value of a is %d \n", a);
//        printf("the address of a is %u \n", &a);
//        printf("the value of b is %d \n", *b);
//         printf("the address of b is %u", &b);
//         printf("the value of b is %d", *(&));

//   }

#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 2, j = 4;
    sumAndAvg(i, j, &sum, &avg);
    printf("the value of sum is %d\n", sum);
    printf(" the value of avg is %f\n", avg);
    

    return 0;
}