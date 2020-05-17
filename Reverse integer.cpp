int Solution::reverse(int A) {
    int res = 0;
    bool isNeg = A < 0;
    if(!isNeg){
        while(A>0){
            int dig = A%10;
            if(res > INT_MAX/10) return 0;
            if(res == INT_MAX/10 && dig > 7) return 0;
            res = res*10 + dig;
            A = A/10;
        }
        return res;
    }
    else{
        A = -A;
        while(A>0){
            int dig = A%10;
            if(res > INT_MAX/10) return 0;
            if(res == INT_MAX/10 && dig > 8) return 0;
            res = res*10 + dig;
            A = A/10;
        }
        return -1*res;
    }
}
