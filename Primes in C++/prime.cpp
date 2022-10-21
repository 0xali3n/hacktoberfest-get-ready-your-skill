#include <bits/stdc++.h>
using namespace std;

    bool prime(int n){
 
        if( n < 2)
            return false;

            for(int i = 2; i < n/2 ; i++ ){

                if(n%i == 0)
                    return false;
            }
            return true;

        
    }
int main(){

    int lower,upper;
    cout << "Enter the lower limit" << endl;
    cin >> lower ;
    cout << "Enter the upper limit" << endl;
    cin >> upper;

    for(int i = lower; i <=upper;i++){

        if(prime(i));
        cout << i <<" ";
    }
    

}

