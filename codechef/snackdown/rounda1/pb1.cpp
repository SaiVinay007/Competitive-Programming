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


float solve(string s){
    ll len = s.length();
    ll flag=-1;
    float num=0.0;
    rep(i,0,len){
        if(i==0){
            if (s[i] =='d' || s[i] == 'f'){
                flag=0;
            }
            else{
                flag=1;
            }  
            num+=0.2;  
        }
        else{
            if((s[i] =='d' || s[i] == 'f') && flag==1 ){
                num+=0.2;
                flag=0;
            }
            else if((s[i] =='j' || s[i] == 'k') && flag==0 ){
                num+=0.2;
                flag=1;
            }
            else{
                num+=0.4;
            }
        }
    }
    return num;
}

int main()
{
    ll t;
    cin >>t;
    rep(i,0,t){
        ll n;
        cin >> n;

        vector <string> str;
        float sum=0;
        float time[100];
        rep(j,0,n){
            time[j]=0;
        }

        rep(j,0,n){
            string s;
            cin >> s;
            str.push_back(s);

            rep(k,0,j){
                if (s==str[k]){
                    time[j] = time[k]/2;
                    break;
                }
            }

            if (time[j]==0){
                time[j] = solve(s);
            }

            sum+=time[j];
        }

        cout<<sum*10<<endl;
    }

    return 0;
}
