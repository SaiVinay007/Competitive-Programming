#include <bits/stdc++.h>
using namespace std;

long long split(long long k){
    long long  max =k;
    long long b = (long long) max/12;
    if(b > 0 ){
        max = split(k/2) + split(k/3) + split(k/4);
        return split(k/2) + split(k/3) + split(k/4);
    }else{
        return max;
    }
}

int main(int argc, char const *argv[])
{
    int flag =1;

   while(flag){
       long long sum=0,q;
       cin >> q;
       if(q ==0 || q == EOF){
           flag = 0;
       }
       else{   sum = split(q);
       cout << sum;
       }
    
   }
    return 0;
}
