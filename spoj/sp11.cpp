#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int q,sum=0;
    cin >>q;

    for(int j=1;j<=q;j++){
        for(int i = 1; i <= ( int )sqrt(j); i++){   
            if(j%i == 0){
                sum += 1;
            }
        }
    }
    

    cout << sum;
    

    return 0;
}

