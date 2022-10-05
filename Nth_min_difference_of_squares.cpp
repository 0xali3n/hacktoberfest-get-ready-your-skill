// This program will give the nth minimum no which can obtained
// by the differnce of squares of two numbers.

// Example- for n=1 the first min will be 2^2-1^2 = 3
//   for n=2 the second min will be 3^2-2^2 = 5
//   for n=3 the third min will be 4^2-3^2 = 7
//   for n=4 the forth min will be 3^2-1^2 = 8
//   for n=5 the fifth min will be 5^2-4^2 = 9
  
  
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<3;
    }else{
        n--;
        if(n%3==0){
            cout<<((n/3)+1)*4;
        }else if(n%3==2){
            cout<<(((n+2)/3)+1)*4 -1;
            
        }else if(n%3==1){
            cout<<(((n+2)/3)+1)*4 -3;
            
        }
        
    }
    
}
