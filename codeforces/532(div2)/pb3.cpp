#include<bits/stdc++.h>
#include<climits>

#include<iomanip>

using namespace std;
#define M_PI 3.14159265358979323846
typedef long long int ll;

int main(){
    ll n,r;
    cin>>n>>r;
    double R;

    double tn;
    tn = sin(((M_PI)*(1.0))/n);

    R = (r*tn)*1.0/(1-tn);

    cout<<setprecision(8)<<R;


	return 0;
}