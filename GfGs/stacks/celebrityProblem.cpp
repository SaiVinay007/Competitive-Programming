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

int getId(int M[MAX][MAX], int n)
{
bool knows(int a, int b){ 
    return M[a][b]; 
} 
  
// Returns -1 if celebrity 
// is not present. If present, 
// returns id (value from 0 to n-1). 
int findCelebrity(int n) 
{ 
    // Handle trivial  
    // case of size = 2 
  
    stack<int> s; 
  
    int C; // Celebrity 
  
    // Push everybody to stack 
    for (int i = 0; i < n; i++){
        s.push(i); 
    } 
  
    // Extract top 2 
    int A = s.top(); 
    s.pop(); 
    int B = s.top(); 
    s.pop(); 
  
    // Find a potential celevrity 
    while (s.size() > 1) { 
        if (M[A][B]){ 
            A = s.top(); 
            s.pop(); 
        } 
        else{ 
            B = s.top(); 
            s.pop(); 
        } 
    } 
  
    // Potential candidate? 
    C = s.top(); 
    s.pop(); 
  
    // Last candidate was not  
    // examined, it leads one  
    // excess comparison (optimize) 
    if (M[C][B]) 
        C = B; 
  
    if (M[C][A]) 
        C = A; 
  
    // Check if C is actually 
    // a celebrity or not 
    for (int i = 0; i < n; i++) 
    { 
        // If any person doesn't  
        // know 'a' or 'a' doesn't  
        // know any person, return -1 
        if ( (i != C) && 
                (M[C][i] ||  
                 !M[i][C]) ) 
            return -1; 
    } 
  
    return C; 
} 

    
}