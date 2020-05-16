vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    for(int i=1;i<A+1;i++){
        if(i%3==0&&i%5!=0) ans.push_back("Fizz");
        else if(i%3!=0&&i%5==0) ans.push_back("Buzz");
        else if(i%15==0) ans.push_back("FizzBuzz");
        else {
            istringstream input;
            input>>i;
        }
    }
}