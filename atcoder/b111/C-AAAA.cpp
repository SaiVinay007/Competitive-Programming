// #include <bits/stdc++.h>
// using namespace std;

// typedef long long int ll;
// typedef vector<int> vi; 
// typedef pair<int,int> pi; 
// typedef vector<ll> vll; 


// #define F first;
// #define S second;
// #define PB push_back;
// #define MP make_pair;
// #define rep(i, a, b) for (int i=a; i<b; i++)


#include<bits/stdc++.h>
using namespace std;
int cnt1[100003],cnt2[100003],n,x,mx1,mx2,x1,x2;
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(i%2==0)
		{
			cnt1[x]++;
			if(mx1<cnt1[x])
				mx1=cnt1[x],
				x1=x;
		}
		else
		{
			cnt2[x]++;
			if(mx2<cnt2[x])
				mx2=cnt2[x],
				x2=x;
		}
	}
	sort(cnt1,cnt1+100003);
	sort(cnt2,cnt2+100003);
	if(x1!=x2)
		cout<<n-mx1-mx2;
	else
		cout<<n-max(mx1+cnt2[100001],mx2+cnt1[100001]);
}



// int main(){
// 	ll t;
// 	cin >>t;
//     ll a[t],b[t];
// 	rep(i,0,t){
// 		cin>>a[i];
//         b[i]=0;
// 	}
//     ll n ;
//     rep(i,0,t){
//         rep(j,0,t){
//             if(a[j]==a[i]){
//                 b[i] +=1;
//             }
//         }
//     }

//     ll f=INT32_MIN,s=INT32_MIN;
//     rep(i,0,t){
//         if(b[i]>f){
//             s = f;
//             f = b[i];
//         }
        
//         else if(b[i]>s && b[i]<f )
//         {
//             s = b[i];
//         }

        
        
//     }
//     ll num;
//     if(f==s){
//         cout <<"0";
//     }
//     else if(s<t/2 && f >t/2 ){
//         cout << (t/2)-s;
//     }
//     else if(s<t/2 && f<t/2){
//         cout << t - (f+s);
//     }
//     cout << num;


// 	return 0;
// }