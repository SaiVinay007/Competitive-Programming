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

int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n;
        cin>>n;
        if(n==2010 || n==2015 || n==2016 || n==2017 || n==2019 ){
            cout << "HOSTED ";
        }
        else{
            cout <<"NOT HOSTED";
        }
        cout << endl;
    }

    return 0;
}



