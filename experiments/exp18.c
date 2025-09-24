#include <stdio.h>

int main()
{
    FILE *fpd, *fpe, *fpo;
    int a, n, i;

    fpd = fopen("data.txt", "w");
    if (fpd == NULL)
    {
        printf("Error opening data.txt!\n");
        return 1;
    }

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Enter mixture of %d even and odd numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        putw(a, fpd);
    }
    fclose(fpd);

    fpd = fopen("data.txt", "r");
    fpe = fopen("even.txt", "w");
    fpo = fopen("odd.txt", "w");

    if (fpd == NULL || fpe == NULL || fpo == NULL)
    {
        printf("Error opening one of the files!\n");
        return 1;
    }

    while ((a = getw(fpd)) != EOF)
    {
        if (a % 2 == 0)
            putw(a, fpe);
        else
            putw(a, fpo);
    }

    fclose(fpd);
    fclose(fpe);
    fclose(fpo);

    printf("Content of odd.txt:\n");
    fpo = fopen("odd.txt", "r");
    while ((a = getw(fpo)) != EOF)
    {
        printf("%d\n", a);
    }
    fclose(fpo);

    printf("Content of even.txt:\n");
    fpe = fopen("even.txt", "r");
    while ((a = getw(fpe)) != EOF)
    {
        printf("%d\n", a);
    }
    fclose(fpe);

    return 0;
}
