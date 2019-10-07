#include<iostream>
using namespace std;

int main(){

    int n,m,x,items=0,k=0;
    cin >> n >> m;
    int c[n],a[m];

    for (int i = 0 ;i<n;i++){
        cin >> x;
        c[i] = x;
    }

    for (int i = 0 ;i<m;i++){
        cin >> x;
        a[i] = x;
    }

    for (int i = 0 ;i<m;i++){
       for (int j =k ;j<n;j++){
          
          k = j+1;

          if(a[i]>=c[j]){
              j=n;
              items += 1;
          }
          else {
              continue;
          }

          if(k == n){
              i = m;
          }
          a[i] = 0;
          
       }
    }
 
    cout << items;
    
return 0;

}
