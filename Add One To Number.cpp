vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    bool carry = true;
    for(int i=n-1;i>=0;i--){
        if(!carry){
            break;
        }
        A[i] = A[i] + 1;
        if(A[i] == 10){
            A[i] = 0;
            carry = true;
        }
        else carry = false;
    }
    if(carry){
        A.insert(A.begin(),1);
    }
    while(A[0] == 0){
        A.erase(A.begin());
    }
    return A;
}