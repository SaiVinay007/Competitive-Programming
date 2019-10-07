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

bool checkSorted(ll n, queue<ll>& q) 
{ 
    stack<ll> st; 
    ll expected = 1; 
    ll fnt; 
  
    // while given Queue is not empty. 
    while (!q.empty()) { 
        fnt = q.front(); 
        q.pop(); 
  
        // if front element is the expected element 
        if (fnt == expected) 
            expected++; 
  
        else { 
            // if stack is empty, push the element 
            if (st.empty()) { 
                st.push(fnt); 
            } 
  
            // if top element is less than element which 
            // need to be pushed, then return fasle. 
            else if (!st.empty() && st.top() < fnt) { 
                return false; 
            } 
  
            // else push into the stack. 
            else
                st.push(fnt); 
        } 
  
        // while expected element are coming from 
        // stack, pop them out. 
        while (!st.empty() && st.top() == expected) { 
            st.pop(); 
            expected++; 
        } 
    } 
  
    // if the final expected element value is equal 
    // to initial Queue size and the stack is empty. 
    if (expected - 1 == n && st.empty()) 
        return true; 
  
    return false; 
} 

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
        queue<ll> q1,q2;
        stack<ll> s;
		ll n;
        cin>>n;
        // cout<< "took n ";
        rep(j,0,n){
            ll p;
            
            cin>>p;
            // cout<<"came into a";            
            q1.push(p);
        }
        // cout<<"pushed into queue";
        checkSorted(n,q1);
        
	}
	return 0;
}