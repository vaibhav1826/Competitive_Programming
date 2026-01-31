// 172. Factorial Trailing Zeroes

class Solution {
public:
    int trailingZeroes(int n) {
        int zeroes=0;
        int i=1;
        while(n>=(int)pow(5,i)){
            int temp=n/(int)pow(5,i);
            zeroes+=temp;
            i++;
        }
        return zeroes;
    }
};