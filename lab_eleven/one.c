/*
a program to read the characters from user until the user enters comma character (,) 
        and store it in a file. Display the content stored in a file on the screen.
*/

#include <stdio.h>

int main()
{

        char a;
        FILE *p;

        p = fopen("char.txt","w+");

        if (p == NULL)
        {
                printf("CANNOT OPEN FILE\n");
                return 0;
        }
        while (1)
        {
                scanf("%c",&a);
                if (a == ',')
                        break;
                fputc(a,p);
        }
        rewind(p);

        while(1)
        {
                a = fgetc(p);
                if (a == EOF)
                {
                        break;
                }
                printf("%c",a);
        }
        fclose(p);
        
}