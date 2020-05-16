int Solution::hammingDistance(const vector<int> &A) {
    const int M = 1000000007;
    vector<int> setBits(32,0);
    vector<int> B = A;
    for(int i=0;i<32;i++){
        for(int j = 0;j<A.size();j++){
            setBits[i] += (B[j]&1);
            B[j] = B[j]/2;
        }
    }
    int sum = 0;
    for(int i=0;i<32;i++){
        sum = (sum + setBits[i]*(A.size() - setBits[i]))%M;
    }
    return (2*sum)%M;
}