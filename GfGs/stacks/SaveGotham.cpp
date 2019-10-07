// A Stack based C++ program to find next 
// greater element for all array elements. 


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

	

/* prints element and NGE pair for all 
elements of arr[] of size n */
void saveGotham(ll arr[], int n) { 
	
	stack < int > s; 
	ll sum=0;
	ll m = 1000000001;

	/* push the first element to stack */
	s.push(arr[0]); 

	// iterate for rest of the elements 
	for (int i = 1; i < n; i++) { 

		if (s.empty()) { 
		s.push(arr[i]); 
		continue; 
		} 

		/* if stack is not empty, then 
		pop an element from stack. 
		If the popped element is smaller 
		than next, then 
		a) print the pair 
		b) keep popping while elements are 
		smaller and stack is not empty */
		while (s.empty() == false && s.top() < arr[i]) 
		{		 
			// cout << s.top() << " --> " << arr[i] << endl;
			sum = (sum+arr[i])%m;
			s.pop(); 
		} 

		/* push next to stack so that we can find 
		next greater for it */
		s.push(arr[i]); 
	} 

	/* After iterating over the loop, the remaining 
	elements in stack do not have the next greater 
	element, so print -1 for them */
	// while (s.empty() == false) { 
		// cout << s.top() << " --> " << -1 << endl; 
		// s.pop(); 
	// } 

	cout<<sum<<endl;
} 

/* Driver program to test above functions */
int main(){
	ll t;
	cin>>t;
	rep(i,0,t){
		ll n;
		cin>>n;
		ll arr[n];
		rep(j,0,n){
			cin>>arr[j];
		}
		saveGotham(arr,n);
	}
	return 0; 
}
