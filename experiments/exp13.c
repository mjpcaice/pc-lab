#include <stdio.h>
int main()
{
    int *ptr;
    int sum;
    sum = 45;
    ptr = &sum;
    printf("sum is %d \n", sum);
    printf("sum pointer is %d \n", *ptr);
    return 0;
}