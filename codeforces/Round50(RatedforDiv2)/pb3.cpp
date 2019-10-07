
// Need to reduce the time complexity


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long t;
    cin >> t;

    for(int i = 0 ; i<t ; i++){
        long long l,r;
        cin >> l >> r;

        long long classy = 0;
        
        //  To find number of zeros in a number

        for(long long j = l;j<r+1;j++){
            long long n = j;
            long long num = 0;

            while(n!=0){
                if (n%10 != 0){
                    num += 1;
                }
                n = n/10;
            }

            if(num <= 3){

                classy += 1;

            }


        }   
        cout << classy<<endl; 

    }


    return 0;
}
