#include <stdio.h>


bool isPalindrome(int x)
{
    long long s = x;
    if (x < 0 or (x % 10 == 0 && x != 0))
    {
        return 0;
    }
    long long temp = 0;
    while (x != 0)
    {
        temp = x % 10 + temp * 10;
        x = x / 10;
    }
    return s == temp or x == temp / 10;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    if(isPalindrome(n)==1){
printf("%d is a Plaindrome Number \n",n);
    }
    else{
        printf("Not a palindrome number \n");

    }
    
    return 0;
}
