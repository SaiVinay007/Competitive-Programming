#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool isSubsetSum(ll set[], ll n, ll sum) 
{ 
    // The value of subset[i][j] will be true if there is a  
    // subset of set[0..j-1] with sum equal to i 
    bool subset[n+1][sum+1]; 
   
    // If sum is 0, then answer is true 
    for (ll i = 0; i <= n; i++) 
      subset[i][0] = true; 
   
    // If sum is not 0 and set is empty, then answer is false 
    for (ll i = 1; i <= sum; i++) 
      subset[0][i] = false; 
   
     // Fill the subset table in botton up manner 
     for (ll i = 1; i <= n; i++) 
     { 
       for (ll j = 1; j <= sum; j++) 
       { 
         if(j<set[i-1]) 
         subset[i][j] = subset[i-1][j]; 
         if (j >= set[i-1]) 
           subset[i][j] = subset[i-1][j] ||  
                                 subset[i - 1][j-set[i-1]]; 
       } 
     } 
   
     /*   // uncomment this code to prll table 
     for (ll i = 0; i <= n; i++) 
     { 
       for (ll j = 0; j <= sum; j++) 
          prllf ("%4d", subset[i][j]); 
       prllf("\n"); 
     }*/
   
     return subset[n][sum]; 
} 

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<sum<<"\n";
    
    if(sum%2==1)
    {
        cout<<"NO";
    }
    else if(sum%360==0)
    {
        cout<<"YES";
    }
    else if(isSubsetSum(arr,n,sum/2))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


    return 0;
}
