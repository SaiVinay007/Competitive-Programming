#include<bits/stdc++.h>
#include<climits>

#include<iomanip>

using namespace std;
#define M_PI 3.14159265358979323846
typedef long long int ll;

vector<ll> numx(ll arr[][2], ll x)
{
    ll lf=0,rt=0;
    for(ll i = 1;i<677;i++)
    {
        if(x-arr[i][0] >=0)
        {
            rt+=1;
        }
        else
        {
            lf+=1;
        }
    }

    vector <ll> v;
    v.push_back(lf);
    v.push_back(rt);

    return v;

}

vector<ll> numy(ll arr[][2], ll y)
{
    ll up=0,dn=0;
    for(ll i = 1;i<677;i++)
    {
        if(y-arr[i][1] >=0)
        {
            up+=1;
        }
        else
        {
            dn+=1;
        }
    }

    vector <ll> v;
    v.push_back(up);
    v.push_back(dn);

    return v;
}


int main(){
    ll arr[667][2];

    for(ll i=0;i<667;i++)
    {
        ll x,y;
        cin>>x>>y;
        arr[i][0] = x;
        arr[i][1] = y;
    }

    ll turn = 2000;
    ll a,b;
    while(turn--)
    {
        vector<ll> n1,n2;
        n1 = numx(arr,arr[0][0]);
        n2 = numy(arr,arr[0][1]);


        if(n1[0]>=n1[1])
        {
            arr[0][0]-=1;
        }
        else
        {
           arr[0][0]+=1; 
        }

        if(n2[0]>=n2[1])
        {
            arr[0][1]+=1;
        }
        else
        {
           arr[0][1]-=1; 
        }

        cout<< arr[0][0]<<" "<<arr[0][1];
        cout.flush();

        cin>> a>> b;
        

    }




    

	return 0;
}