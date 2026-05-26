// 3908. Valid Digit Number

// Easy
// Topics
// premium lock icon
// Companies
// Hint
// You are given an integer n and a digit x.

// A number is considered valid if:

// It contains at least one occurrence of digit x, and
// It does not start with digit x.
// Return true if n is valid, otherwise return false.

 

bool validDigit(int n, int x) {
        vector<int> digits;
        int copy = n;
        int ans =0;
        while(copy){
            digits.push_back(copy%10);
            copy/=10;
        }
        for(int i=0;i<digits.size();i++){
            if(i==digits.size()-1&&digits[i]==x) return false;
            if(digits[i]==x) ans=1;
        }
        return ans;
        
    }