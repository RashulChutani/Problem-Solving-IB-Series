int Solution::trailingZeroes(int A) {
    int sum = 0;
    int count = A/5;
    int i = 5;
    while(count != 0){
        sum += count;
        i *= 5;
        count = A/i;
    }
    return sum;
}
