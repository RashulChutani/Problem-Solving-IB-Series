const int M = 1000003;

int fact(int n){
    int res = 1;
    for(int i=2;i<=n;i++){
        res = (res*i)%M;
    } return res;
}

int Solution::findRank(string A) {
    string s = A;
    sort(A.begin(),A.end());
    int rank = 1;
    for(int j = 0;j<s.size();j++){
        char c = s[j];
        int index = 0;
        for(int i=0;i<A.size();i++){
            if(A[i] == c){
                index = i;
                break;
            }
        }
        A.erase(index,1);
        rank = (rank%M + (index*fact(A.size())%M))%M;
        // cout<<A.size() - 1<<" "<<fact(A.size() - 1)<<" ";
    }
    return rank%M;
}