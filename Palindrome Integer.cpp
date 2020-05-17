int Solution::isPalindrome(int A) {
    string out_string;
    stringstream ss;
    ss << A;
    out_string = ss.str();
    string one = out_string;
    reverse(out_string.begin(), out_string.end());
    if(one == out_string) return 1;
    return 0;
}