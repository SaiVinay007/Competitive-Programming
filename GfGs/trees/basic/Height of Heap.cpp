#include <bits/stdc++.h> 
using namespace std;

int height(int N) 
{ 
    return ceil(log2(N + 1)) - 1; 
} 
  
// driver node 
int main() 
{ 
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        for(int j=0;j<N;j++)
        {
            int k;
            cin>>k;
        }
        cout << height(N)<<endl;    
    }
     
    return 0; 
} 