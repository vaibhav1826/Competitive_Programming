// 367. Valid Perfect Square

class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1;
        int high=num;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((long long)mid*mid==num){
                return true;
            }
            else if((long long)mid*mid>num){
                high=mid-1;
            }
            else if((long long)mid*mid<num){
                low=mid+1;
            }
        }
        return false;
    }
};