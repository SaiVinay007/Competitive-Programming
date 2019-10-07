#include <bits/stdc++.h>
using namespace std;

int main(){

    int q;
    cin >> q;

    
    for(int i = 0; i < q; i++)
    {
        int a,b;
        cin >> a >>b;
        
        if (b == a) {
            if(a%2 == 0 ){
                cout <<a*2 << endl;
            }else{
                cout << ((a-1)*2) +1 <<endl;
            }
        }else if(b == a-2){
            if(a%2 == 0){
                cout << a+b <<endl;
            }else{
                cout << a+b-1 << endl;
            }
        }else{
            cout << "No Number"<<endl;
        }
        

    }
    

    return 0;
}