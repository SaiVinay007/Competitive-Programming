vector<int> Solution::findPerm(const string A, int B) {
    // stack<char> st;
    vector<int> v(B,0);    
    int itr1=1, itr2=B;
    
    for (int i = B-1; i>=0; i--)
    {
        if (A[i-1]=='I')
        {
            v[i] = itr2;
            itr2-=1;
        }
        else
        {
            v[i] = itr1;
            itr1 += 1;
            
        }
    }
    
    
    return v;
    
}