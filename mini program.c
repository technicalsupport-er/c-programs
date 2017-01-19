#include<stdio.h>
#include<conio.h>
int main()
{

  int i,j,k,l,fact=1,n,r,d,c;

  printf(" 1.Factorial\n 2.Prime\n 3.Odd Even\n 4.Exit\n");




  int z=1;

  while(z==1)
  {

    printf("\nEnter number\n");
    scanf("%d",&n);

    printf("\nEnter option number\n");
    scanf("%d",&i);


    switch(i)
      {
      case 1:
        for(r=1;r<=n;r++)
            fact=fact*r;

        printf("Factorial is %d",fact);
        fact=1;
        printf("\n");
        break;

      case 2:
        for(l=2;l<n;l++)
        {
            d=n%l;
            if(d==0)
                break;
        }


            if(d==0)
                printf("The number is not prime\n");
            else
                printf("The number is prime\n");

        printf("\n");
        break;

      case 3:
        c=n%2;
        if(c==0)
            printf("Th number is even\n");
        else
            printf("The number is odd\n");

        printf("\n");
        break;


      case 4:
        if(n==4)
           exit(1);

           break;

  }



  }












    return 0;
}





















