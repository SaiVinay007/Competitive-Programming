vector<int> Solution::maxset(vector<int> &A) {
    // int N = A.size();

    //     long long mx_sum = 0;
    //     long long cur_sum = 0;
    //     int mx_range_left = -1;
    //     int mx_range_right = -1;
    //     int cur_range_left = 0;
    //     int cur_range_right = 0;

    //     while(cur_range_right < N) {
    //         if(A[cur_range_right] < 0) {
    //             cur_range_left = cur_range_right + 1;
    //             cur_sum = 0;
    //         } else {
    //             cur_sum += (long long)A[cur_range_right];
    //             if(cur_sum > mx_sum) {
    //                 mx_sum = cur_sum;
    //                 mx_range_left = cur_range_left;
    //                 mx_range_right = cur_range_right + 1;
    //             } else if(cur_sum == mx_sum) {
    //                 if(cur_range_right + 1 - cur_range_left > mx_range_right - mx_range_left) {
    //                     mx_range_left = cur_range_left;
    //                     mx_range_right = cur_range_right + 1;
    //                 }
    //             }
    //         }
    //         cur_range_right++;
    //     }
    //     vector<int> ans;
    //     if(mx_range_left == -1 || mx_range_right == -1)
    //             return ans;

    //     for(int i = mx_range_left; i < mx_range_right; ++i)
    //             ans.push_back(A[i]);
    //     return ans;
    // }
    long int max=-1;
    long int sum= 0;
    int max_st=-1, max_end=-1,cur_st=0,cur_end=0;
    
    for(int i=0;i<A.size();i++)
    {
        sum += A[i];
        cur_end = i;
        if (sum>max)
        {
            max = sum;
            max_end = i;
            max_st = cur_st;
        }
        // else if(sum == max) {
        //     if (cur_end == max_end+1)
        //     {
        //         max_end = cur_end;
        //     }
        // }
        else if 
        {
            if (cur_end-cur_st > max_end - max_st)
            {
                max_st = cur_st;
                max_end = cur_end;
            }
        }
        if(sum<0)
        {
            sum = 0;
            cur_st = i+1;
        }
      
    }
    
    vector<int> v;
    if(max_st == -1 || max_end == -1)
    {
        return v;
    }
    for(int i=max_st;i<=max_end;i++)
    {
        v.push_back( A[i] );
    }

    return v;
}
