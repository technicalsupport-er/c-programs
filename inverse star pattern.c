#include <stdio.h>
int main()
{
    int i, j, rows,k,r,n;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    k=rows;


    for(r=1;r<=rows;r++)
    {
        for(i=1;i<=k;i++)
            {
                printf("* ");
            }

        printf("\n");
        k=k-1;

    }

    return 0;
}
