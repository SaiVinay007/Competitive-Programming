#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
typedef vector<int> vi; 
typedef pair<long long,long long> pi; 
typedef vector<long long> vll; 


#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define rep(i, a, b) for (ll i=a; i<b; i++)

int main(){
    
    int T,n;
    pi P[100000];
    
    cin>>T;
    
    while(T--){
        cin >> n;
        
        for(int i = 0,a,b;i < n;++i){
            cin >> a>>b;
            P[i] = make_pair(b,a);
        }
        
        sort(P,P + n);
        
        int ans = 0,e = -1;
        
        // we take the events which end first. so we sorted based on their finish time and take the events one by 
        // one such that they dont clash with each other
        // if the next event is after this event then event is add to the list 
        for(int i = 0;i < n;++i){
            if(P[i].second >= e){
                e = P[i].first;
                ++ans;
            }
        }
        
        cout << ans<<endl;
}

	return 0;
}