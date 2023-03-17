class Solution {
    int maximum(int arr[],int size)
    {
        int max=INT_MIN;
        for(int i=0;i<size;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        return max;
    }
public:
    int maxSubArray(vector<int>& nums) {
        int* maxSum= new int[nums.size()];
        maxSum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] < maxSum[i-1] + nums[i])
            {
                maxSum[i]=maxSum[i-1]+nums[i];
            }
            else
            {
                maxSum[i] = nums[i];
            }
        }
        int max=maximum(maxSum,nums.size());
        delete[] maxSum;
        return max;
    }
};
