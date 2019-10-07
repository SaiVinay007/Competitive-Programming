#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long t;
    cin >>t ;

    
    for(long long  i = 0; i < t; i++)
    {
        long long n,m,x,y;
        cin >>n>>m>>x>>y;
        n = n-1;
        m = m-1;
        if (n%x ==0 && m%y==0  ){
            cout<<"Chefirnemo"<<endl;
        }
        else if ((n-1)%x==0 && (m-1)%y==0  && n-1 >=0 && m-1 >= 0)
        {
            cout <<"Chefirnemo"<<endl;
        }
        else{
            cout << "Pofik"<<endl;
        }
        

    }
    

    return 0;
}
