int M = 1e9 + 7;

long long int fact(int n){
    if(n<=1) return 1;
    return (n%M*fact(n-1)%M)%M;
}

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

int Solution::solve(int A, vector<int> &B) {
    sort(B.begin(),B.end());
    vector<int> blocks;
    blocks.push_back(B[0] - 1);
    for(int i=0;i<B.size()-1;i++){
        int t = B[i+1]-B[i]-1;
        if(t > 0) blocks.push_back(t);
    }
    blocks.push_back(A-B[B.size()-1]);
    // for(int i=0;i<blocks.size();i++) cout<<blocks[i]<<" ";
    int total=A - B.size();
    long long int num = fact(total)%M;
    long long int d = 1;
    for(int i=0;i<blocks.size();i++){
        d = (d%M * fact(blocks[i]))%M;
    }
    long long int powr = 1;
    for(int i=1;i<blocks.size()-1;i++){
        powr = (powr%M * power(2,blocks[i]-1)%M)%M;
    }
    return ((num*power(d,M-2)%M)%M *powr)%M;
}