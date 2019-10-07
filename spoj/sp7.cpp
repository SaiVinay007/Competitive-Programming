#include <bits/stdc++.h>
using namespace std;

int main(){

    int flag=1;
    while(flag){
        int sum,num=0,n;

        cin >> n;
        if(n==0){
            flag=0;
        }else{
            for(int i = 1; i <= n; i++)
            {
                
                sum = n-i+1;
                num += sum*sum;
            }
            cout << num<<endl;
        }

    }
    

    return 0;
}