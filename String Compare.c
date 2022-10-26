#include<stdio.h>
#include<string.h>
 
int main()
{
     
    char string1[100];
    char string2[100];
    printf("Enter 1st string:\n");
    scanf("%[^\n]s",string1);
    printf("Enter 2nd string:\n");
    scanf("%[^\n]s",string2);
    
    int a = strcmp(string1, string2);
     
    if (a==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");
     
    
    return 0;
}
