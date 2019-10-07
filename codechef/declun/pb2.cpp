#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<climits>
#include<cmath>
using namespace std;

typedef long long int ll;

int main(){
	ll t;
	cin >>t;
	while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll yb,mb,db,yc,mc,dc;
        cin>>yb>>mb>>db;
        cin>>yc>>mc>>dc;
        ll tot=0;
        ll daysnor=0;
        ll daysleap=0;
        for(ll i=0;i<n;i++)
        {
            daysnor +=a[i];
        }
        daysleap = daysnor+1;
        ll bet=0;
        for(ll i=yb+1;i<yc;i++)
        {
            if(i%4==0)
            {
                bet+=daysleap;
            }
            else
            {
                bet+=daysnor;   
            }
        }
        // cout<<"bet"<<bet<<" ";
        tot+=bet;
        
        ll x,y,d1,d2;
        x=0;
        y=0;
        d1=0;
        d2=0;

        if(yb%4==0)
        {
            a[n-1]+=1;
            if(yc!=yb)
            {
                for(ll i=mb;i<n;i++ )
                {
                    x+=a[i];
                }

            }
            else
            {
                for(ll i=mb;i<(mc-1);i++){
                    x+=a[i];
                }
            }
            if(mb==mc && yb==yc){
                d1 = (dc-db)+1;
            }
            else{

                d1+=(a[mb-1]-db) +1;
            }
        }
        else
        {
            if(yc!=yb)
            {
                for(ll i=mb;i<n;i++ )
                {
                    x+=a[i];
                }

            }
            else
            {
                for(ll i=mb;i<(mc-1);i++){
                    x+=a[i];
                }
            }
            if(mb==mc && yb==yc){
                d1 = (dc-db)+1;
            }
            else{

            d1+=(a[mb-1]-db) +1;
            }
        }


        if(yc%4==0)
        {
            a[n-1]+=1;
            if(yc!=yb){
                for(ll i=0;i<(mc-1);i++){
                    y+=a[i];
                }
            }
            if(mc==mb && yb==yc){

                d2=0;
            }
            else{
                d2+=dc;
            }
        }
        else
        {   if(yc!=yb){
                for(ll i=0;i<(mc-1);i++){
                    y+=a[i];
                }
            }
            if(mc==mb && yb==yc){

            d2=0;
            }
            else{
                d2+=dc;
            }
        }
        // cout<<"x"<<x<<"y"<<y<<"d1"<<d1<<"d2"<<d2<<" ";
        tot += x+y+d1+d2;
        cout<<tot<<"\n";


	}


	return 0;
}