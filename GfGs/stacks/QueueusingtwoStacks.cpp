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

class myqueue{

    public:stack<int> s1, s2; 
  
    public:void push(int x) 
    { 
        // Move all elements from s1 to s2 
        while (!s1.empty()) { 
            s2.push(s1.top()); 
            s1.pop(); 
        } 
  
        // Push item into s1 
        s1.push(x); 
  
        // Push everything back to s1 
        while (!s2.empty()) { 
            s1.push(s2.top()); 
            s2.pop(); 
        } 
    } 
  
    // Dequeue an item from the queue 
    public:int pop() 
    { 
        // if first stack is empty 
        // if (s1.empty()) { 
        //     cout << "-1"; 
        //     exit(0); 
        // } 
  
        // Return top of s1 
        int x = s1.top(); 
        s1.pop(); 
        cout<<x;
        return x; 
    } 

}; 



int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
        ll q;
        cin >>q;
        myqueue q1;

        rep(j,0,q){
            ll a,b;
            cin>>a;
            if(a==1){
                cin >> b;
                q1.push(b);
            }
            else{
                q1.pop();
            }  
        }
	}


	return 0;
}