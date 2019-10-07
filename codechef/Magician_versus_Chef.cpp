#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long t;

    cin >>t;
    
    for(long long  i = 0; i < t; i++)
    {   
        long long position;
        long long n,x,s;

        cin >> n>>x>>s;
        long long a[n];
        
        position = x;
        for(long long  j = 0; j < s; j++)
        {
            long long p,q;
            cin>>p>>q;
            if (p == position){
                position = q;
            }
            
            else if (q == position)
            {
                position =p;
            }
            
            
        }

        cout << position<<endl;
        
    }
    

    return 0;
}
