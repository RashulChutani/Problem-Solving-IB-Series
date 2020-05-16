int Solution::isPower(int A) {
    if(A==1) return true;
    for(int i=2; i<A; i++){
        for(int j=0;;j++){
            if(pow(i,j) == A) return 1;
            if(pow(i,j)>A) break;
        }
    }
    return 0;
}
