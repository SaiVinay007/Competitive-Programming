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


ll a[1000][1000];

void solve(ll n,ll m){
    ll flag=0;
    
    rep(i,1,n-1){
        if(flag==1){
            break;
        }
        rep(j,1,m-1){
            if(a[i][j]==0){
                if(i >0 && j>0){
                    if( ( a[i-1][j+1]==0 && a[i-1][j]==0 && a[i][j+1]==0   ) ||
                      ( a[i][j+1]==0 && a[i+1][j+1]==0 && a[i+1][j]==0   ) ||
                      ( a[i+1][j]==0 && a[i+1][j-1]==0 && a[i][j-1]==0   ) ||
                      ( a[i][j-1]==0 && a[i-1][j]==0 && a[i-1][j-1]==0   ) )
                      {

                      }


                    else
                    {
                      flag=1;
                      break;
                    }
                }

            }

            if(i==0 && j!=0 && j!=n-1){
                if( ( a[i+1][j]==0 && a[i+1][j-1]==0 && a[i][j-1]==0   ) || ( a[i][j-1]==0 && a[i-1][j]==0 && a[i-1][j-1]==0   )){}
                else{flag=1;}
            }
            else if(j==0 && i!=0 && i!=n-1){
                if(( a[i][j+1]==0 && a[i+1][j+1]==0 && a[i+1][j]==0   ) ||
                      ( a[i+1][j]==0 && a[i+1][j-1]==0 && a[i][j-1]==0   )){}
                else{
                    flag=1;
                }
                
            }

            else if(i==n-1 && j!=0 && j!=n-1){
                if(( a[i-1][j+1]==0 && a[i-1][j]==0 && a[i][j+1]==0   ) ||( a[i+1][j]==0 && a[i+1][j-1]==0 && a[i][j-1]==0   ) ){}
                else{flag=1;}
            }
            else if(j==n-1 && i!=0 && i!=n-1){
                    if( ( a[i-1][j+1]==0 && a[i-1][j]==0 && a[i][j+1]==0   ) || ( a[i][j-1]==0 && a[i-1][j]==0 && a[i-1][j-1]==0   )){}
                else{flag=1;}
            }

            if(i==0&&j==0){
                if(( a[i+1][j]==0 && a[i+1][j-1]==0 && a[i][j-1]==0   )){}
                else{flag=1;}
            }
            
            else if (i==0&&j==n-1)
            {
                if(( a[i][j-1]==0 && a[i-1][j]==0 && a[i-1][j-1]==0   )){}
                else{flag=1;}
            }
            
            else if (i==n-1&&j==0)
            {
                if(( a[i][j+1]==0 && a[i+1][j+1]==0 && a[i+1][j]==0   )){}
                else{flag=1;}
            }
            else if (i==n-1&&j==n-1)
            {
                if(( a[i-1][j+1]==0 && a[i-1][j]==0 && a[i][j+1]==0   )){}
                else{flag=1;}
            }

            
        }
    }
    if(flag==0){
        cout <<"YES";
    }
    
    else
{
    cout<<"NO";    
}
    
}

int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n,m;
        cin>>n>>m;
        char c;
        rep(j,0,n){
            rep(k,0,k){
                cin>>c;
                if(c=='.'){
                    a[n][m]=0;;
                }
                else{
                    a[n][m]=1;
                }
            }
        }

        solve(n,m);
        cout<<endl;
    }

    return 0;
}



