bool isPrime(int n){
    if(n == 2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0) return false;
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int> sol(2);
    for(int i=2;i<A;i++){
        if(isPrime(i) && isPrime(A-i)){
            sol[0] = i;
            sol[1] = A-i;
            return sol;
        }
    }
    return sol;
}