vector<int> Solution::wave(vector<int> &A) {
    
    sort(A.begin(), A.end());
    int t= A.size(), n = A.size(), i =0;
    vector<int> v(n,0);
    int a=0, b=n-1;
    while(i<=n-2)
    {
        v[i] = A[i+1];
        v[i+1]= A[i];
        i+=2;
    }
    if(n%2!=0)
    {
        v[n-1] = A[n-1];
    }
    
    return v;
}