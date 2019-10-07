#include <bits/stdc++.h>
using namespace std;


long long gcd(long long a , long long b){

    if (b>a){
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if ( b==0 ){
        return a;
    }
    else if(b==1){
        return 1;
    }
    

    return gcd(a%b,b);

}


int main(int argc, char const *argv[])
{
    
    long long a,b,x,y;

    cin >> a>>b>>x>>y;

    long long div = gcd(x,y);
    x = x/div;
    y = y/div;

    long long p = a/x;
    long long q = b/y;
    int flag ;
    if (p>q){
        flag =0;
    }else{
        flag=1;
    }

    long long min;

    if (flag==0){
        min = q;
    }else{
        min = p;
    }

    cout<<min;
    

    return 0;
}
