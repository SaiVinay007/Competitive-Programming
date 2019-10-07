#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    long long n,h;

    cin >> n>>h;

    long long a[n][2];
    long long safe[n];
    long long gap[n];
    for(long long i = 0; i < n; i++)
    {
        cin >> a[i][0]>>a[i][1];
        safe[i]= a[i][1]-a[i][0];
       
    }
    for (long long i =0;i<n-1;i++){
        gap[i]=a[i+1][0]-a[i][1];

    }

    long long dis[n];
    long long max=0;

    for(long long i = 0; i < n; i++)
    {   
        long long num;
        long long sum=0;
        int flag = 1;
        while(flag){
            num = i;
            sum+=gap[num];
            if (h<sum){
                flag=0;
            }else{
                num+=1;
            }

            if(num>n-1){
                flag=0;
            }
            cout << gap[num]<<endl;

        }
        cout << num<<endl;
        long long complete_gaps ;
        complete_gaps = sum - gap[num];

        dis[i] = a[num][1]-a[i][0]+h-complete_gaps;
        if(dis[i]>max){
            max = dis[i];
        }
        
         
    }

    cout << max;
    
    
    // cout << h+sum;


    return 0;
}
