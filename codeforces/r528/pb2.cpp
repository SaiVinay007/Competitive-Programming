#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi; 
typedef pair<int,int> pi; 
typedef vector<ll> vll; 


#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define rep(i, a, b) for (int i=a; i<b; i++)

void solve(ll xa,ll ya,ll xb,ll yb,ll xc,ll yc){
    vector <ll>v1;
    vector <ll>v2;

    v1.push_back(xa);
    v1.push_back(xb);
    v1.push_back(xc);

    v2.push_back(ya);
    v2.push_back(yb);
    v2.push_back(yc);

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    ll  x1,x2,y1,y2;
    x1 = v1[1] - v1[0];
    x2 = v1[2] - v1[1];
    y1 = v2[1] - v2[0];
    y2 = v2[2] - v2[1];
    ll maxx,maxy;

    maxx = v1[2] - v1[0];
    maxy = v2[2] - v2[0];
    ll ans;
    if(maxx == 0){
        ans =  y1+y2-2;
    }
    else if(maxy==0){
        ans = x1+x2-2;
    }
    else{
        ans = maxx + maxy-1-2;
    }
    cout<< ans;
}


int main(){
    ll xa, ya, xb,yb, xc,yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    solve(xa, ya, xb,yb, xc,yc);

	return 0;
}