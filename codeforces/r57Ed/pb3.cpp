#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define rep(i, a, b) for (int i=a; i<b; i++)

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
        ll a;
        cin>>a;
        ll m = 998244353;
        ll flag=0;
        for(ll n=3;n<=998244353;n++){
            if(flag==1){
                break;
            }
            if(n%2==0){
                for(ll i=1;i<n/2;i++){
                    if(flag==1){
                        break;
                    }
                    for(ll j=i+1;j<=n/2;j++){
                        ll x,y;
                        x = i;
                        y = j-1;
                        ll inter;
                        if(((n-2)*180)%n==0){
                            inter = ((n-2)*180)/n;
                        }
                        else{
                            flag=1;
                            break;   
                        }

                        ll s1,s2,t1,t2;
                        t1 = (x-1)*180;
                        t2 = (y-1)*180;
                        s1 = (x-2)*inter;
                        s2 = (y-2)*inter;

                        ll ang;
                        ang = inter - ((t1-s2)/2) - (t2-s2)/2;
                        if(ang == a){
                            cout<<n<<endl;
                            flag=1;
                            break;
                        }

                    }
                }

            }
            else{
                for(ll i=1;i<(n+1)/2;i++){
                    for(ll j=i+1;j<=(n+1)/2;j++){
                        ll x,y;
                        x = i;
                        y = j-1;
                        ll inter = ((n-2)*180)/n;

                        ll s1,s2,t1,t2;
                        t1 = (x-1)*180;
                        t2 = (y-1)*180;
                        s1 = (x-2)*inter;
                        s2 = (y-2)*inter;

                        ll ang;
                        ang = inter - ((t1-s2)/2) - (t2-s2)/2;
                        if(ang == a){
                            cout<<n<<endl;
                            flag=1;
                            break;
                        }

                    }
                }
            }
        }
        if(flag==0){
            cout<<"-1"<<endl;
        }

	}


	return 0;
}