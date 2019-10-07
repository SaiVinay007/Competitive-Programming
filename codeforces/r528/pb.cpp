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
	string t;
	cin >>t;
    ll num = t.length();
    char arr[num];
    if (num%2==0){
        ll k = 0;
        for(int i=0;i<num;i+=2){
            arr[i] = t[(num/2) -1 -k ] ;
            arr[i+1] = t[(num/2) -1 +k+1];
            k+=1;
        }
    }
    else{
        ll k = 1;
        arr[0] = t[(num/2)];
        for(int i=1;i<num;i+=2){
            arr[i] = t[(num/2)+k];
            arr[i+1] = t[(num/2)-k];
            k+=1;
        }
    }
    rep(i,0,num){
        cout<<arr[i];
    }

	return 0;
}