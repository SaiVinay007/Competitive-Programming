int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]==n-i-1)
        {   
            if(A[i+1]!=A[i] || i == n-1 )
            {
                return 1;    
            }
        }
        
    }
    
    return -1;
    
}
