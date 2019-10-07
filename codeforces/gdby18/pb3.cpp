#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<climits>
#include<cmath>

using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    
    vector<ll> fun;
    for(ll k=1;k<=n;k++){
        ll tmp=0;
        ll num=1;
        ll flag=0;
        while(flag==0){
            tmp+=num;
            num=(num+k)%n;
            if(num==1){
                flag=1;
            }
            else if(num==0){
                num=n;
            }
        }
        fun.push_back(tmp);
    }

    sort(fun.begin(),fun.end());
    ll l = fun.size();
    ll a;

    for(ll i=0;i<l;i++){
        if(i==0){
            a = fun[i];
            cout<< a<<" ";
        }
        if (fun[i]!=a){
            a = fun[i];
            cout<<a<<" ";
        }        
    }



    return 0;

}