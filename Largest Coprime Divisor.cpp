int Solution::cpFact(int A, int B) {
    int gcd == __gcd(A,B);
    if(gcd == 1){
        return A;
    }
    else{
        while(gcd != 1){
            A /= gcd;
            gcd = __gcd(A,B);
        }
    }
    return A;
}