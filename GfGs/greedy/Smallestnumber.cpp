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
    cin >>t ;
    rep(i,0,t){
        ll s,d;
        cin >> s>>d;
        ll a[d];

        rep(j,0,d){

            if(j!=0 && s<= (9*(d-j-1)) ){
                a[j] = 0;
            }

            else if(s<= 1+ (9*(d-j-1)) ){
                a[j] = 1;
                s -= 1;
            }
            
            else if (s<=2+(9*(d-j-1))){
                a[j] = 2;
                s -= 2;
            }
            else if (s<=3+(9*(d-j-1))){
                a[j] = 3;
                s -= 3;
            }
            else if (s<=4+(9*(d-j-1))){
                a[j] = 4;
                s -= 4;
            }
            else if (s<=5+(9*(d-j-1))){
                a[j] = 5;
                s -= 5;
            }
            else if (s<=6+(9*(d-j-1))){
                a[j] = 6;
                s -= 6;
            }
            else if (s<=7+(9*(d-j-1))){
                a[j] = 7;
                s -= 7;
            }
            else if (s<=8+(9*(d-j-1))){
                a[j] = 8;
                s -= 8;
            }
            else if (s<=9+(9*(d-j-1))){
                a[j] = 9;
                s -= 9;
            }

            
        }
        if (s != 0){
            cout << "-1"<<endl;
        }
        else{
            rep(j,0,d){
                cout<<a[j];
            }
            cout<< endl;
        }
        
    }



	return 0;
}