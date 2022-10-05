#include <iostream>
using namespace std;

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
    cout<<"Enter Number: ";
    cin>>n;
    if(isPalindrome(n)==1){
cout<<"Plaindrome Number "<<endl;
    }
    else{
        cout<<"Not a palindrome number "<<endl;

    }
    
    return 0;
}
