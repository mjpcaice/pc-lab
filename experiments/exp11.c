#include <stdio.h>
#include <string.h>

int main()
{
    char a[50][20], temp[20];
    int n, i, j;

    printf("Enter the number of students in the class :");
    scanf("%d", &n);
    getchar();

    printf("Enter the name of %d students \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        fgets(a[i], sizeof(a[i]), stdin);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(a[j], a[j + 1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }
    printf("Sorted order of names  \n");
    for (i = 0; i < n; i++)
    {
        puts(a[i]);
    }
}