#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin>>s;

    for(ll i=0;i<5;i++)
    {
        string a;
        cin>>a;

        if(s[0]==a[0] || s[1]==a[1])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    return 0;
}
