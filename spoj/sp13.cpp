#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int q,a,b;

    cin >> q;

    
    for(int i = 0; i < q; i++)
    {
        cin >> a >>b;

        int p=0;
        int q=0;
        if(a<10){
            p = 10 - a;
            
            if(b%2==0){
                q = (p*b)%10;
                cout << q << endl;
            }else{
                q = 10 - ((p*b)%10);
                cout << q << endl;    
            }
            
        }
        else if(a>10){
            p = a - 10;
            q = (p*a)%10;
            cout <<q<<endl;
        }
        else if (a==10){
            cout << 0;
        }
    }
    
    
    return 0;
}
