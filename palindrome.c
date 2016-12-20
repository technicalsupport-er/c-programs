#include<stdio.h>

int main()
{
    int integer,n;

    printf("Enter integer\n");
    scanf("%d",&integer);

    int remainder,reverse=0;

    n=integer;

    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;


    }

    if(reverse==integer)
        printf("The number is palindrome");
    else
        printf("Te number is not palindrome");

    return 0;

}
