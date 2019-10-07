#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n][m] = {0};
        ll max=1;
                
        arr[0][0]=1;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(i==0 && j==0)
                {
                    continue;
                }
                vector<ll> vec;
                
                if((j-2)>=0 && arr[i][j-2]!=0)
                {
                    vec.push_back(arr[i][j-2]);
                }
                if((i-2)>=0 && arr[i-2][j]!=0)
                {
                    vec.push_back(arr[i-2][j]);
                }
                if((j-1)>=0 && (i-1)>=0 && arr[i-1][j-1]!=0)
                {
                    vec.push_back(arr[i-1][j-1]);
                }
                if((j+1)<m  && (i-1)>=0 && arr[i-1][j+1]!=0)
                {
                    vec.push_back(arr[i-1][j+1]);
                }
                
                sort(vec.begin(),vec.end());
                set<ll> s;
                for(ll x = 0; x != vec.size(); x++)
                {
                    s.insert(vec[x]);
                }
                if(vec.size()==0)
                {
                    arr[i][j]=1;
                }
                else
                    {
                        ll flg=0;
                        set<ll>::iterator it = s.begin();
                        for(ll x = 0; x != s.size(); x++)
                        {

                            if(*it!=x+1)
                            {
                                arr[i][j] = x+1;
                                flg=1;
                                if(x+1>max)
                                {
                                    max = x+1;
                                }
                                break;
                            }
                            it++;
                        }
                        if(flg==0)
                        {
                            arr[i][j] = s.size()+1;
                            if(s.size()+1>max)
                            {
                                max = s.size()+1;
                            }
                        }

                    }                   
            }
        }
        
        cout<<max<<"\n";
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }



    }

    return 0;
}