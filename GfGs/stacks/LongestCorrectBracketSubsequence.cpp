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

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
        string s;
        ll l,r,max=0;
        ll temp=0;
        cin >>s>>l>>r;
        stack<char> st;
        rep(j,l,r+1){
            if(s[j]=='('){
                st.push(s[j]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                    temp+=2; 
                    if(temp>max){
                        max = temp;
                    } 
                }
                else{
                    // temp = 0;       
                }
            }
            

        }
        cout<<max<<endl;
	}


	return 0;
}