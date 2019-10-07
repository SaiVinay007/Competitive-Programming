#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int flag=1;
    while(flag){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0){
            flag=0;
        }
        else{
            if(b-a == c-b ){
                cout << "AP " <<c +(b-a)<<endl;
            }else if(b/a == c/b){
                cout << "GP " << c*(b/a)<<endl;
            }
        }
    }

    return 0;
}
