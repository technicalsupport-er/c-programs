#include<stdio.h>
#include<conio.h>
int main()
{

   int a,b,c,z,s;

   printf("The triplets are:\n");

   for(a=1;a<=30;a++)
   {
       for(b=1;b<=30;b++)
       {
           for(c=1;c<=30;c++)
           {
               s=a*a;
               z=b*b+c*c;
               if(s==z)
                printf("%d %d %d\n",a,b,c);

           }
       }


    

   }

    return 0;
}





















