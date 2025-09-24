#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int age, adno;
    float avg;
} s[50], temp;
void main()
{
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the names,age,adno,avgmark of %d students:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d %f", s[i].name, &s[i].age, &s[i].adno, &s[i].avg);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(s[j].name, s[j + 1].name) > 0)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("sorted order \n");
    printf("name\t age\t admn no\t avgmark \n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t %d\t %d\t %f \n", s[i].name, s[i].age, s[i].adno, s[i].avg);
    }
}