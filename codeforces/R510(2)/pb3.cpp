#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    ll a[n][2];
    ll num_negative  = 0;
    ll num_positive = 0;
    ll num_zeros = 0;
    ll min_ = 9999999999;
    ll max_ = -9999999999;

    ll maxid;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i][0];

        if (a[i][0]>=0){
            a[i][1] = 1;
            num_positive += 1;
           
        }
        else if(a[i][0]==0){
            num_zeros += 1;
            a[i][1] = 2;
        }
        else{
            
            a[i][1] = 3;
            if (max(max_,a[i][0])==a[i][0]){
                max_ = max(min_,a[i][0]);
                maxid = i;
            }
            num_negative += 1;
        }
    }

    if(num_zeros >1){
        
        for(ll i = 0; i < n; i++)
        {
            
        }
        
    }


    

    return 0;
}
