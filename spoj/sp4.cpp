#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++)
    {
        int a,sum=0;
        cin >> a;
        while(a/5 != 0){
             sum += a/5;
            a /= 5;
        }
        cout << sum << "\n";;
    }
    

    return 0;
}
