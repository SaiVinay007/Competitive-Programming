#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi; 
typedef pair<int,int> pi; 
typedef vector<ll> vll; 


#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define rep(i, a, b) for (int i=a; i<b; i++)

void printEgyptian(int nr,int dr){
    if(nr==0 || dr==0){
        return;
    }
    if(dr%nr==0){
        cout << "1/"<<dr/nr;
        return;
    }
    if(nr%dr==0){
        cout << nr/dr;
        return;
    }
    if(nr>dr){
        cout << nr/dr <<"+";
        printEgyptian(nr%dr,dr);
        return;
    }
    // when nr<dr and dr%nr !=0
    int n = dr/nr + 1;
    cout << "1/"<<n<<"+";
    printEgyptian(nr*n - dr,dr*n );
    return;

}


int main(){ 

    int p,q;
    cin >> p>>q;
    cout << "Egyptian Fraction Representation of "
         << p << "/" << q << " is "; 
    printEgyptian(p,q);



	return 0;
}