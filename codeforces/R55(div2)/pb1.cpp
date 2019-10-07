#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d,x,y;
        cin>>n>>x>>y>>d;
        ll steps;
        if(abs(x-y)%d==0)
        {
            steps = abs(x-y)/d;
        }
        else if(abs(y-1)%d==0) 
        {
            
            steps = abs(x-1)/d + abs(y-1)/d +1; 
            if(abs(n-y)%d==0)
            {
                ll tmp = abs(n-x)/d + abs(n-y)/d +1;
                if(tmp<steps) steps = tmp;
            }
        }
        else if(abs(n-y)%d==0)
        {
            steps = abs(n-x)/d + abs(n-y)/d +1;             
        }
        else{
            steps = -1;
        }
        cout << steps<<"\n";
    }

    return 0;
}