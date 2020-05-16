string Solution::convertToTitle(int A) {
    string res = "";
    while(A>0){
        int num = A % 26;
        if(num == 0) num = 26;
        char temp = 'A' + num - 1;
        string s = "";
        s += temp;
        res.insert(0,s);
        A = A/26;
        if(num == 26) A = A - 1;
    }
    return res;
}
