vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int k = 0;
    for(int i=0;i<A.size();i++){
        k += A[i] - (i+1);
    }
    long long int z = 0;
    for(int i=0;i<A.size();i++){
        z += A[i]*A[i] - (long long)(i+1)*(long long)(i+1);
    }
    long long int sum = z/k;
    int a = (int)(sum + k)/2;
    int b = sum - a;
    /// Using Sum of squares!

    vector<int> ret;
    ret.push_back(a);
    ret.push_back(b);
    return ret;
}
