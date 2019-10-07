/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */


// Editorial
bool myCmp(Interval a, Interval b) {
            return a.start < b.start;
        }

vector<Interval> merge(vector<Interval> &intervals) {
 
    if(intervals.size() < 2) {
        return intervals;
    }

    sort(intervals.begin(), intervals.end(), myCmp);
    int first = 0;

    for(int second = 1; second < intervals.size(); second++) {
        // There is overlap in intervals at first and second position.
        if(intervals[second].start <= intervals[first].end) {
            // We merge the second interval into the first one and modify the first interval to reflect it. 
            intervals[first].end = max(intervals[second].end, intervals[first].end);
        }
        else {
            // No overlap between first and second. Move forward. 
            ++first;
            intervals[first].start = intervals[second].start;
            intervals[first].end = intervals[second].end;
        }
    }
    
    intervals.erase(intervals.begin() + first + 1, intervals.end());
    return intervals;
}


// My solution
bool compareByStart(const Interval &a, const Interval &b)
{
    return a.start < b.start;
}
 
vector<Interval> Solution::merge(vector<Interval> &A) {

    sort(A.begin(), A.end(), compareByStart);
    vector<Interval> temp;
    
    // merge interals
    int n = A.size();
    int it = 1,dl=0;
    int pos = 0;
    temp.push_back(Interval(A[pos].start, A[pos].end));
    
    while(it<n)
    {
        if(A[pos].end>=A[it].start)
        {
            if(A[pos].end<A[it].end)
            {
                A[pos].end = A[it].end;
                temp[pos].end =  A[pos].end;
            }
        }
        if(A[pos].end < A[it].start)
        {
            pos+=1;
            temp.push_back(Interval(A[it].start, A[it].end));
        }
        it+=1;
    }
    return temp;
    
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    // sort vector based on start
    // while(it<n)
    // {
    //     // cout<<it<<endl;
    //     // cout<<A[it-dl].start<<" "<<A[it-dl].end<<" "<<A[pos].end<<endl;
    //     if(A[pos].end>=A[it-dl].start)
    //     {
    //         // cout<<A[it].start<<endl;
    //         if(A[pos].end<A[it-dl].end)
    //         {
    //             A[pos].end = A[it-dl].end;
    //             // if(A[it-dl].end==97)
    //             // {
    //                 // cout<<"yes";
    //             // }
    //         }
    //         A.erase(A.begin()+it-dl);
    //         dl+=1;
    //         // cout<<A[it].end<<endl;
    //         // cout <<endl;
    //     }
    //     if(A[pos].end < A[it-dl].start)
    //     {
    //         pos+=1;
    //         // cout<<"hi"<<endl;
    //     }
    //     it+=1;
    // }
    

}
