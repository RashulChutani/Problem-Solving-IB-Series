vector<int> Solution::flip(string A) {
    // We need to find the subarray with
    // the max number of 0 - 1's
    vector<int> ans;
    int ones_here = 0;
    int zeros_here = 0;
    int start = 1;
    int ones_so_far = 0;
    int zeros_so_far = 0;
    int bestEnd = 0;
    int bestStart = 1;
    for(int i=0;i<A.size();i++){
        if(A[i] == '1') ones_here++;
        else zeros_here++;
        if(ones_here>zeros_here){
            start = i+2;
            ones_here = 0;
            zeros_here = 0;
        }
        if(zeros_so_far - ones_so_far < zeros_here - ones_here){
            zeros_so_far = zeros_here;
            ones_so_far = ones_here;
            bestEnd = i+1;
            bestStart = start;
        }
    }
    if(bestEnd<bestStart) return ans;
    else {
        ans.push_back(bestStart);
        ans.push_back(bestEnd);
        return ans;
    }
}