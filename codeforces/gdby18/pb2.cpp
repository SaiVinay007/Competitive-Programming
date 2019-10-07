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

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

int main(){
	ll n;
    cin>>n;
    vector <pair<ll,ll>> v1;
    vector <pair<ll,ll>> v2;

    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v1.push_back(make_pair(a,b));
    }
    ll brr[n][2];
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v2.push_back(make_pair(a,b));
    }
    ll tmp[2];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    ll xmax = v2[n-1].first;
    ll xdif = v1[n-1].first - v1[0].first;

    sort(v1.begin(),v1.end(),sortbysec);
    sort(v2.begin(),v2.end(),sortbysec);

    ll a,b;
    ll flag=0;

    ll ymax = v2[n-1].second;
    ll ydif = v2[n-1].first - v2[0].first;

    if(xmax>=xdif){
        
    }
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        {
            a = v1[i].first;
            b = v1[i].second;
        }
        tmp[0] = v1[i].first;
        tmp[1] = v1[i].second;
        if(a!=tmp[0] || b!=tmp[1]){
            break;
            flag=1;
        }

    }





	return 0;
}