#include<stdio.h>


void main()
{
  char ch;

  int z=1;

  while(z=1)
  {

       printf("\nEnter alphabet, type 0 when done\n");
       scanf("%c",&ch);

     switch(ch)
        {
            case 'a':printf("Vowel\n");
            break;

            case 'e':printf("Vowel\n");
            break;

            case 'i':printf("Vowel\n");
            break;

            case 'o':printf("Vowel\n");
            break;

            case 'u':printf("Vowel\n");
            break;

            case 'A':printf("Vowel\n");
            break;

            case 'E':printf("Vowel\n");
            break;

            case 'I':printf("Vowel\n");
            break;

            case 'O':printf("Vowel\n");
            break;

            case 'U':printf("Vowel\n");
            break;



            case '0':exit(ch);
            break;

            default:printf("Consonant\n");
            break;
        }

        fflush(stdin);

  }


}
