int Solution::solve(vector<int> &A, int B, int C) {
    if(A.size() == 0) return 0;

    if(B == 1){
        int count = 0;
        for(int i=0;i<A.size();i++){
            if(A[i] >= C) break;
            count++;
        }
        return count;
    }

    vector<int> NonZ = A;
    if(NonZ[0] == 0) NonZ.erase(NonZ.begin());
    vector<int> Cdig;
    int num = C;
    while(num != 0){
        Cdig.insert(Cdig.begin(),num%10);
        num = num/10;
    }
    if(Cdig.size() < B) return 0;
    if(Cdig.size() > B){
        int ret = NonZ.size()*pow(A.size(),B-1);
        return ret;
    }
    int ret = 0;
    for(int i=0;i<B;i++){
        int count = 0;
        if(i == 0){
            int j = 0;
            for(j=0;j<NonZ.size();j++){
                if(NonZ[j] >= Cdig[i]) break;
                count++;
            }
            ret = count*pow(A.size(),B-1);
            if(j == NonZ.size() || NonZ[j] > Cdig[i]) return ret;
        }
        else{
            int j = 0;
            for(j=0;j<A.size();j++){
                if(A[j] >= Cdig[i]) break;
                count++;
            }
            ret = ret + count*pow(A.size(),B-i-1);
            if(j == A.size() || A[j] > Cdig[i]) return ret;
        }
    }
    return ret;
}