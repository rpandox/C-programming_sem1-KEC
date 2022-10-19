/*
a program to read a line of text and to count the number of vowels, consonants, white spaces,
          digits and special characters in it. Use a character array to store the line.
          */

#include <stdio.h>

int main(void)
{
  char str[100];
  int i,d = 0,c = 0,v = 0,sc = 0,sp = 0;

  printf("\n\n");
  printf("Enter a line of text\n");
  gets(str);

  for ( i = 0; str[i] != '\0'; i++)
  {
    if (str[i]== 0 || str[i]== 1 || str[i]== 2 || str[i]== 3 || str[i]== 4 || str[i]== 5 || str[i]== 6 || str[i]== 7 || str[i]== 8 ||str[i]== 9 )
    {
      d++;
    }
    else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
      {
        v++;
      }
      else
      {
        c++;
      }     
    }
    else if (str[i] == ' ')
    {
      sp++;
    }

    else
    {
      sc++;
    }   
  }

  printf("NUMBER OF : \n");
  printf("Consonants\t\t%d\n",c);
  printf("Vowels\t\t\t%d\n",v);
  printf("Digits\t\t\t%d\n",d);
  printf("Spaces\t\t\t%d\n",sp);
  printf("Special Characters \t%d \n",sc);
  
}
