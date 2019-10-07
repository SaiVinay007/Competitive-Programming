#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool comp(int a, int b) 
{ 
    return (a < b); 
} 




int n;
string s;

int main() {
	
	cin >> n >> s;
	
	vector <int> l(n), r(n);
	for(int i = 0; i < n; ++i){
		if(s[i] == 'G'){
			l[i] = 1;
			if(i > 0) l[i] += l[i - 1];
		}
	}
	for(int i = n - 1; i >= 0; --i){
		if(s[i] == 'G'){
			r[i] = 1;
			if(i + 1 < n) r[i] += r[i + 1];
		}
	}
	
	
	int res = 0;
	int cntG = 0;
	for(int i = 0; i < n; ++i)
			cntG += s[i] == 'G';
			
	for(int i = 0; i < n; ++i){
		if(s[i] == 'G') continue;
		int nres = 1;
		if(i > 0) nres += l[i - 1];
		if(i + 1 < n) nres += r[i + 1];
		res = max(res, nres);
	}
	
	res = min(res, cntG);
	if(cntG == n) res = cntG;
	cout << res << endl;
	return 0;
}



/*
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll tmpg1=0,tmpg2=0,tmps=0;    
    ll num=0;
    vector<ll> vec;
    for(ll i=0;i<n;i++){
        char c;
        if(s[i]=='G'){
            num+=1;
        }
    }


    for(ll i=0;i<n;i++){
        char c;
        if(s[i]=='G' && i==0){
            c = s[i];
            tmpg2+=1;
        }
        else if(s[i]=='S' && i==0){
            c = s[i];
        }
        else{
            if(s[i]==c && c == 'G'){
                c = s[i];
                tmpg2+=1;
            }
            else if(s[i]==c && c=='S'){
                c = s[i];                
                tmps+=1;
            }
            else if(s[i]!=c && c=='S'){
                c = s[i];                
                tmpg2 += 1;
            }
            else if(s[i]!=c && c=='G'){
                tmps = 1;
                c = s[i];
                tmpg1 = tmpg2;
                tmpg2 = 0;
                
            }
            
        }
        if(tmps==1 && num>=tmpg1+tmpg2+1){
            vec.push_back(tmpg1+tmpg2+1);
        }
        else if(tmps==1){
            vec.push_back(tmpg1+tmpg2-1);
        }
        else{
            vec.push_back(max(tmpg1,tmpg2));
        }
    }
    
    
    ll max = 0;
    for(ll i=0;i<vec.size();i++){
        if(max<vec[i]){
            max = vec[i];
        }
    }

    cout << max;
    return 0;
}
*/