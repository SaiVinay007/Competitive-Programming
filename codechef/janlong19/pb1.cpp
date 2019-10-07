#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s,n;
           // getline to work after doing one cin
        getline(cin, s);
        n = "not";
        // cout<< s<<" ";
        ll flag=0;
        ll length = s.length();
        for(ll i=0;i<(length-2);i++)
        {
            string str;
            str = s.substr(i,3);
            if(str==n)
            {
                if(i==0)
                {
                    if(s[3]==' ' || length==3)
                    {
                        flag = 1;
                        break;
                    }
                }
                else if(i==(length-3))
                {
                    if(s[length-4]==' ')
                    {
                        flag = 1;
                        break;
                    }
                }
                else
                {
                    if(s[i-1]==' ' && s[i+3]==' ')
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if(flag==0)
        {
            cout<<"regularly fancy";
        }
        else
        {
            cout<<"Real Fancy";
        }
        cout<<"\n";
    }



	return 0;
}