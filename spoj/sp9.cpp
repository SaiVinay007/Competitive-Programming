#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++)
    {
        int n,sum=0;
        cin >> n;
        int A[n],B[n];
        for(int j = 0; j < n; j++)
        {
            cin >> A[j];
        }
        for(int j = 0; j < n; j++)
        {
            cin >> B[j];
        }

        sort(A,A+n);
        sort(B,B+n);

        for (int k=0;k<n;k++){
            sum += A[k]*B[k];
        }

        cout << sum << endl;
        


    }
    

    return 0;
}