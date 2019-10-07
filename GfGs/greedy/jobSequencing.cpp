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

struct Job{
    char id;
    int prize;
    int dl;

};

bool comparision(Job a,Job b){
    return (a.prize>b.prize);
}

void printJobSequence(Job arr[],int n){
    sort(arr,arr+n,comparision);
    int result[n];
    bool slot[n];
    rep(i,0,n){
        slot[i]=false;
    }
    rep(i,0,n){
        
        for(int j = min(n,arr[i].dl)-1; j>=0; j++)
        {
            if (slot[j]==false){
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
        
    }

    rep(i,0,n){
        if(slot[i]){
            cout<<arr[result[i]].id<<" ";
        }
    }

}


int main(){

    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, 
                   {'d', 1, 25}, {'e', 3, 15}}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Following is maximum profit sequence of jobsn"; 
    printJobSequence(arr,n); 

	return 0;
}