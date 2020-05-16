int Solution::titleToNumber(string A) {
    int res = 0;
    for(int i=0;i<A.size();i++){
        int num = A[i] - 'A' + 1;
        res = res*26 + num;
    }
    return res;
}