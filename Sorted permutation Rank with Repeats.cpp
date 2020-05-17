const int M = 1000003;

long long int power(long long int A, long long int B){
    if(A == 0) return 0;
    if(B == 0) return 1;

    long result;
    if(B%2 == 0){
        result = power(A,B/2);
        result = (result*result)%M;
    }
    else{
        result = A % M;
        result = (result * power(A,B-1)%M)%M;
    }
    return result % M;
}

int fact(int n){
    if(n<=1) return 1;
    return (n%M *fact(n-1)%M)%M;
}

int Solution::findRank(string A) {
    int rank = 1;
    for(int i=0;i<A.size();i++){
        int count = 0;
        for(int j=i+1;j<A.size();j++){
            if(A[j] < A[i]) count++;
        }
        int num = fact(A.size()-1-i) % M;
        map<char,int> m;
        for(int j=i;j<A.size();j++){
            m[A[j]]++;
        }
        long long int D = 1;
        for(auto p : m){
            D = (D%M * fact(p.second)%M)%M;
        }
        rank = (rank + (count * num * power(D,M-2) % M)%M) %M;
    }
    return rank%M;
}
