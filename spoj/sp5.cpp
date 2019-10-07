#include <bits/stdc++.h>
using namespace std;

long double fact( long double n){
    
    if( n==1){
        return 1;
    }else {
    return  n*fact(n-1);
    }



}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        long double a;
        cin >> a;

        cout <<fact(a) <<endl;
      
        
       
        
    }
        
    return 0;

