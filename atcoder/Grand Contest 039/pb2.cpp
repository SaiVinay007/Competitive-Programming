#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
ll NUM = 1000000007;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

/*












*/

int main()
{
	ll n,x;   
	cin>>n>>x;

	ll ans=0,m=998244353;
	ll val;
	
	for(ll i=0;i<=x;i++)
	{
		val=0;
		ll in=i;
		if(n==1 && i>2)
		{
			val = 0;	
		}
		else if(i/2 > pow(2,n-1))
		{
			val = 0;
		}
		else if()
		{
			
		}
		
		ans+=val;
	}

	cout<<ans%m;

	return 0;
}

// brute force

// while(true)
// 		{
// 			if(i%2==0)
// 			{
// 				i= i/2 + pow(2,n-1); 
// 			}
// 			else
// 			{
// 				i=i/2;
// 			}
// 			val+=1;
// 			if(in==i)
// 			{
// 				cout<<val<<endl;
// 				break;
// 			}	
// 		}