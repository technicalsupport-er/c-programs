#include<stdio.h>
#include<conio.h>
int main()
{
    int y,n,cube, remainder, sum=0,x=0,v,number;
    printf("Enter integer\n");
    scanf("%d",&number);
    v=number;
   y=v;
    while(v!=0)
    {
        v=v/10;
        x++;

    }

    while(y!=0)
    {
        remainder=y%10;
        sum=sum+pow(remainder,x);
        y=y/10;




    }

if(sum == number)
    printf("The number is armstrong\n");
else
    printf("The number is not armstrong");

    return 0;
}





















