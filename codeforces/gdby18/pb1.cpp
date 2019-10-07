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
    ll y,b,r;
    cin>>y>>b>>r;
    ll i;
    for(i=y;i>=1;i--)
    {
        if(b>=i+1 && r>=i+2)
        {
            break;
        }
    }
    ll num;
    num = 3*(i+1);
    cout<< num;

	return 0;
}