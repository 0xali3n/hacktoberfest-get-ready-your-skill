//C Programming code for Copying one file to Another *file

/*The file should be saved in (1.txt &amp; copy.txt) this Format in the location of this c file.
Below is the content of File:
FactsPrime has helped me in learning c-programming!

CODE: */

#include<stdio.h>
#include<stdlib.h>

void file_copy(FILE *, FILE *);

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("1.txt","r");
    fp2 = fopen("copy.txt","w");
    if(fp1==NULL || fp2==NULL)
    {
        perror("");//same as printf, but perror will print compiler error message as well
        exit(0);
    }
    file_copy(fp1, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

void file_copy(FILE *fp1, FILE *fp2)
{
    char ch;
    while((ch=getc(fp1))!=EOF)
        putc(ch, fp2);
}

