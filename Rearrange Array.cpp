void Solution::arrange(vector<int> &A) {
    n = A.size()
    for(int i=0;i<n;i++){
        A[i] = n*(A[A[i]]%n)+A[i];
    }
    for(int i=0;i<n;i++){
        A[i] = A[i]/n;
    }
}