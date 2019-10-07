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
#define rep(i, a, b) for (ll i=a; i<b; i++)

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) { 

        return (a.second < b.second); 
} 
// for sorting based on second element
// sort(vect.begin(), vect.end(), sortbysec); 

int main(){
    ll t;
    cin >> t;

    rep(i,0,t){
        ll n,d,a,b;
        cin>>n>>d>>a>>b;

        vector < pair <ll,ll> > vec;

        rep(j,0,n){
            ll p,q;
            cin>>p>>q;
            vec.push_back(make_pair(a*p+b*q,j+1));
        }

        ll s = vec.size();

        sort(vec.begin(),vec.end());    // does sorting wrt first element

      
        ll sum = 0;

        rep(j,0,n){
           if (vec[j].first<=d){
               sum+=1;
               d-=vec[j].first;
           }
           
           else
           {
               break;
           }
           
        }
        cout << sum<<endl;
        rep(j,0,sum){
            cout<<vec[j].second<<" ";
        }
        cout << endl;



    }    


	return 0;
}