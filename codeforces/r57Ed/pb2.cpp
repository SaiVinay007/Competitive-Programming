#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define rep(i, a, b) for (int i=a; i<b; i++)

int main(){
    ll n;
    string s;
    cin>>n>>s;
    ll num=0;
    ll m =  998244353;
    // for(ll i=0;i<n;i++){
    //     for(ll j= i;j<n;j++){
            
    //         ll flag = 0;
    //         char c;
    //         ll start=0;
    //         if(flag == 0){

    //             for(ll k = 0;k<i;k++){
    //                 if(k==0){
    //                     c = s[k];
    //                     start=1;

    //                 }
    //                 else if(s[k]!=c){
    //                     flag = 1;
    //                     i = n;
    //                     break;
    //                 }
    //             }

    //         }
    //         if(flag==0){
    //             for(ll k = j+1;k<n;k++){
    //                 if(start==0){
    //                     c = s[j+1];
    //                     start = 1;
    //                 }
    //                 else if(s[k]!=c){
    //                     flag = 1;
    //                     break;
    //                 }
    //             }

    //         }

    //         if(flag==0){
    //             num=(num+1)%m;
    //         }

            
    //     }
    // }
    char c;
    ll dis=0;
    for(ll i=0;i<n;i++){
        if(i==0){
            c = s[i];
            dis+=1;
        }
        else if(s[i]!=c){
            dis+=1;
        }
    }
    char d;
    for(ll i =0;i<n;i++){
        for(ll j=i;j<n;j++){
           d = s[i];
            
        }
    }

    cout << num;

	return 0;
}