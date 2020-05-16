int Solution::isPower(int A) {
    if(A==1) return true;
    for(int i=2; i<A; i++){
        float x = log(A)/log(i);
        if(ceil(x) == floor(x)) return 1;
    }
    return 0;
}
