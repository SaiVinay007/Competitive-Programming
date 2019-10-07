#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	vector<ll> a(n);
	vector<ll> b(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
		a[i] = a[i]*(i+1)*(n-i);
		a[i] = a[i];
	}
for(int i = 0; i < n; i++)
{
cin>>b[i];
}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
ll ans = 0;
for(int i = 0; i < n; i++)
{
	a[i] = a[i]%998244353;
	ans += a[i]*b[n-i-1];
	ans = ans%998244353;
}
cout<<ans<<'\n';
	return 0;
}
