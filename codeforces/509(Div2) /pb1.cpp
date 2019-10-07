#include <bits/stdc++.h>
using namespace std;




int main(int argc, char const *argv[])
{
    
    long long n;
    cin >> n;

    long long num;
    long long min;
    long long max;
    cin >> num ;
    min = num;
    max = num;
    for(long long i = 1; i < n; i++)
    {

        cin >> num;
        if (num<min){
            min = num;
        }
        else if(num>max){
            max = num;
        }


    }
    long long total_num = max-min+1;
    if (n==1){
        cout<<0;
    }else{
    cout << total_num-n;

    }
    // cout << min<<endl;
    // cout << max;
    // cout << total_num;

    return 0;
}
