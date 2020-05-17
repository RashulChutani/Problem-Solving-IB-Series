int uniquePaths_h(int row,int col,int A,int B){
    if(row >= A || col >= B) return 0;
    if(row == A-1 && col == B-1) return 1;
    int n1 = uniquePaths_h(row+1,col,A,B);
    int n2 = uniquePaths_h(row,col+1,A,B);
    return n1+n2;
}
int Solution::uniquePaths(int A, int B) {
    return uniquePaths_h(0,0,A,B);
}