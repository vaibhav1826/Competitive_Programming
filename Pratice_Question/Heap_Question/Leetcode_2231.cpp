class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>even;
        priority_queue<int>odd;
        vector<int>arr;
        while(num>0){
            int temp=num%10;
            arr.push_back(temp);
            if(temp%2==0){
                even.push(temp);
            }
            else{
                odd.push(temp);
            }
            num=num/10;
        }
    int result=0;
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            int a=even.top();
            result=result*10+a;
            even.pop();
        }
        else{
            int b=odd.top();
            result=result*10+b;
            odd.pop();
        }
    }
    return result;
    }
};