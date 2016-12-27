#include<stdio.h>

int main()
{
   int r,n,l,j;


   printf("Enter the number of rows\n");
   scanf("%d",&n);

   for(r=1,l=65;r<=n;r++,l++)
   {

       for(j=1;j<=r;j++)
        {
            printf("%c",l);
        }

            printf("\n");

   }

    return 0;




























}

