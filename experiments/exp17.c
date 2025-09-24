#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char a;
    int noc = 0, nos = 0, nol = 1;

    fp = fopen("mjpc.txt", "r");
    
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((a = getc(fp)) != EOF)
    {
        noc++;
        if (a == ' ')
            nos++;
        else if (a == '\n')
            nol++;
    }

    printf("no of characters is %d \n", noc);
    printf("no of spaces is %d \n", nos);
    printf("no of lines is %d \n", nol);

    fclose(fp);
    return 0;
}
