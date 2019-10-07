int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    // vector< pair <int,int> > v;
    
    // for (int i=0; i<A.size(); i++)
    // {
    //     v.push_back( make_pair(A[i],B[i]) ); 
    // }
    
    // // sort(v.begin(), v.end());
    
    // int steps_val = 0;
    // int x1,x2,y1,y2;
    
    // for(int i=1;i<A.size();i++)
    // {
    //      x1 = v[i].first;
    //      y1 = v[i].second;
    //      x2 = v[i-1].first;
    //      y2 = v[i-1].second;

        
    //     steps_val+= max(abs(x2-x1),(y2-y1));
    // }
    
    // return steps_val;
    
    int total=0;
    for(int i=1;i<A.size();i++)
        total+=max(abs(B[i]-B[i-1]),abs(A[i]-A[i-1]));
    return total;
    
}
