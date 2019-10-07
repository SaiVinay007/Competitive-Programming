#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;




int main(){
    ll t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        ll val=2;

        ll num1 = 1;
        ll num2 = 3;
        ll flg1=0,flg2=0,flg3=0;
        ll tmp = num2;

        for(ll i=1;i<n+1;i++)
        {
            if(i==1)
            {
                cout<<"6"<<" ";
                num1 = num2;
                num2=tmp+val;
                tmp = num2;
            }
            else if(i==n)
            {
                if(num1%3==0)
                {
                    num1+=2;
                }
                cout<< num1*2<<" ";
            }
            else
            {
                if(30000>i && i>=15000 && flg1 ==0)
                {
                    if(num1%3==0)
                    {
                        val = 4;
                        num1 = 3;
                        num2 = num1+val;
                        tmp = num2;
                        flg1 = 1;
                    }
                }
                else if(45000>i && i>=30000 && flg2==0)
                {
                    if(num1%5==0)
                    {
                        val = 6;
                        num1 = 5;
                        num2 = num1+val;
                        tmp = num2;
                        flg2 = 1;
                    }
                }
                else if (i>=45000 && flg3==0)
                {
                    if(num1%5==0)
                    {                   
                        val = 8;
                        num1 = 5;
                        num2 = num1+val;
                        tmp = num2;
                        flg3 = 1;
                    }
                }
                cout<<num2*num1<<" ";
                num1 = num2;
                // num2 = num2+val;
                if(i%3==2 && i!=n-2 && i!=n-3)
                {
                    num2 = 2;
                }
                else
                {
                    num2=tmp+val;
                    tmp = num2;
                }
            }      

            
            
        }
        cout<<endl;
    }    


    return 0;
}