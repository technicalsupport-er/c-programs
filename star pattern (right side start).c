#include <stdio.h>
int main()
{
    int i, j, rows,k,l,m;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    k=rows;
    m=rows;

    for(i=rows;i>=1;i--)
    {
        for(j=1;j<k;j++)
            printf(" ");

        for(l=m+1;l>k;l--)
                printf("*");

        printf("\n");

        k=k-1;

    }












    return 0;
}
