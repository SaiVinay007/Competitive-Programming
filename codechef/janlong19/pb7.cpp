#include<bits/stdc++.h>
using namespace std;
#define M_PI 3.14159265358979323846

typedef long long int ll;

ll gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}

double angle(ll a, ll b, ll c)
{
    double val ;
    double theta;

    val =  ((a*a + b*b) - (c*c))*(1.0)/(2*a*b);
    cout << "val"<< val<< endl;

    theta = acos(val);
    cout <<theta<<"theta"<<endl;
    return theta;
}

double side(ll x, ll y)
{
    double val;
    val = sqrt((x*x + y*y) - (x*y));
    cout<<val<< " "<<x<<" "<<y<<endl;
    return val;
}


void solve(ll n, ll t, ll x, ll y, ll z){
    double a,b,c;
    double theta;
    const long precision = 1000000000; // This is the accuracy.
    ll num,den;
    if(t==1)
    {
        b = 1;
        c = side(min(x,y), z);
        a = side(max(x,y),z);
        // cout<<x<<" "<<y<<" "<<z<<" "; 
        // cout<<a<<" "<<b<<" "<<c<<" ";
    }
    else if(t==2)
    {
        c = 1;
        a = side(max(x,z),y);
        b = side(max(x,z),y);
        
    }
    else if(t==3)
    {
        b=1;
        c = side(min(y,z), x);
        a = side(max(y,z),x);
    }
    else 
    {
        c =1;
        a = side(max(x,z),y);
        b = side(max(x,z),y);   
    }

    theta = angle(a,b,c)*1.0/M_PI;
    cout<<theta<<"theta";
    long gcd_ = gcd(round(theta * precision), precision);
    den = precision / gcd_;
    num = round(theta * precision) / gcd_;

    cout << num<<" "<<den;

}

int main(){
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,t,x,y,z;
        cin>>n>>t>>x>>y>>z;
        solve(n,t,x,y,z);   
        cout<<"\n";    
    }

    return 0;
}