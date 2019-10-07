#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    vector<string>pre, vec, suf;
    for(ll i=0;i<(2*n -2);i++)
    {
        string s;
        cin >> s;
        vec.push_back(s);
        if(vec[i].length()==1)
        {
            pre.push_back(vec[i]);
        }
        else if(vec[i].length()==(n-1))
        {
            suf.push_back(vec[i]);
        }
        
    }
    string sufe,pref;
    if(n==2){
        pref = pre[0];
        sufe = pre[1];
    }
    else{
        if(pre[0]==suf[0].substr(0,1) && pre[1]==suf[1].substr(n-2,1) && suf[0].substr(1,n-2)==suf[1].substr(0,n-2))
        {
            pref = pre[0];
            sufe = suf[1];
        }
        else if (pre[0]==suf[1].substr(0,1) && pre[1]==suf[0].substr(n-2,1) && suf[1].substr(1,n-2)==suf[0].substr(0,n-2))
        {
            pref = pre[0];
            sufe = suf[0];
        }
        else if (pre[1]==suf[1].substr(0,1) && pre[0]==suf[0].substr(n-2,1) && suf[1].substr(1,n-2)==suf[0].substr(0,n-2))
        {
            pref = pre[1];
            sufe = suf[0];
        }
        else if (pre[1]==suf[0].substr(0,1) && pre[0]==suf[1].substr(n-2,1) && suf[0].substr(1,n-2)==suf[1].substr(0,n-2))
        {
            pref = pre[1];
            sufe = suf[1];
        }
    }
    
    string str = pref + sufe;
    ll brr[n];
    for(ll i=1;i<n;i++)
    {
        brr[i]=1;
    }

    for(ll i=0;i<(2*n -2);i++)
    {
        ll num;
        num = vec[i].length();     
        if(str.substr(0,num)==vec[i] && brr[num]==1)
        {   
            cout<<"P";
            brr[num]=0;
        }
        else
        {
            cout<<"S";
        }
        
    }

	return 0;
}
