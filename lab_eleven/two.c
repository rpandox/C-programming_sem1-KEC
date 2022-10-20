/*
a program that writes something in the source file, copies the content of the source 
        file to the destination file and displays the content in the destination file on the screen.
*/

#include<stdio.h>
int main()
{
    FILE *s,*d;
        char ch;
        s = fopen("source.txt","w+");
        if(s == NULL)
        {
                printf("Source file cannot be opened");
        }
        fprintf(s,"This is the content of the source file\n");
        rewind(s);
        d = fopen("dest.txt","w+");
        if(d == NULL)
        {
                printf("Destination file cannot be opened ");
        }
        while(1)
        {
                ch = fgetc(s);
                if(feof(s) != 0)
                {
                        break;
                }
                fputc(ch,d);
        }

        rewind(d);

        while(1)
        {
                ch = fgetc(d);
                if (ch == EOF)
                {
                        break;
                }
                printf("%c",ch);
        }
        fclose(s);
        fclose(d);
        return 0;
}