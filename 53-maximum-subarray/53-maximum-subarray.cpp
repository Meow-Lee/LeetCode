class Solution {
public:  
    int divide(vector<int>& arr, int left, int right){
        if(left == right){
            return arr[left];
        }
        
        int mid = (left+right)/2;
        
        int MaxLeft = divide(arr, left, mid);
        int MaxRight = divide(arr, mid+1, right);
        
        int sumL=0, sumR=0;
        int maxL=INT_MIN, maxR=INT_MIN;
        
        for(int i=mid; i>=left; i--){
            sumL = sumL + arr[i];
            maxL = max(maxL, sumL);
        }
        for(int i=mid+1; i<=right; i++){
            sumR = sumR + arr[i];
            maxR = max(maxR, sumR);
        }
        
        int maxC = maxL + maxR;
        int maxSum = max(max(MaxLeft, MaxRight), maxC);
        
        return maxSum;        
    }
    
    int maxSubArray(vector<int>& nums) {        
        return divide(nums, 0, nums.size()-1);
    }
};