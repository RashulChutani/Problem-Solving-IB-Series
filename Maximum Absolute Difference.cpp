int Solution::maxArr(vector<int> &A) {
    int res;
    int n=A.size();
    vector<int> C(n);
    vector<int> B(n);
    for(int i=0;i<n;i++){
        B[i]=A[i]+i;
        C[i]=A[i]-i;
    }
    int maxB=B[0],maxC=C[0],minB=B[0],minC=C[0];
    for(int i=0;i<n;i++){
        if(B[i]>maxB) maxB=B[i];
        if(B[i]<minB) minB=B[i];
        if(C[i]>maxC) maxC=C[i];
        if(C[i]<minC) minC=C[i];
    }
    int res1=abs(maxB-minB);
    int res2=abs(maxC-minC);
    if(res1>res2) res=res1;
    else res = res2;
    return res;
}