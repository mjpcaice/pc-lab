#include <stdio.h>
int large(int[], int);
void main()
{
    int a[50], i, n, l;
    printf("enter the limit :");
    scanf("%d", &n);
    printf("enter the elements in to the array :");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    l = large(a, n);
    printf("largest is %d \n", l);
}
int large(int b[], int m)
{
    int la, j;
    la = b[0];
    for (j = 1; j < m; j++)
    {
        if (b[j] > la)
            la = b[j];
    }
    return (la);
}