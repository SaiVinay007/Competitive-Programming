#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    long long n,m;
    cin >> n >> m;

    long long a[n];


    for(long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long max,min,max_id;
    max = a[0];
    min = a[0];
    
    for(long long  i = 0; i < n; i++)
    {
        if (a[i]>max){
            max = a[i];
            max_id = i;
        }
        if (a[i] < min){
            min = a[i];
        }
    }

    long long sum = 0 ;
    for(long long  i = 0; i < n; i++)
    {
        sum += max-a[i];
    }
    
    if (sum>m){
        cout << max<<endl;
    }
    else{
        if ((m-sum)%n == 0){
        cout << max+((m-sum)/n)<<endl;

        }else{
        cout << max+((m-sum)/n)+1<<endl;

        }

    }



    cout << max+m;
       


    return 0;
}
