#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

int main()
{

    emp e1;
    emp *ptr;
    ptr = &e1;
    // (*ptr).code = 1001; sane as belowe
    ptr->code = 334;
    printf("value of code is %d", e1.code);

    return 0;
}