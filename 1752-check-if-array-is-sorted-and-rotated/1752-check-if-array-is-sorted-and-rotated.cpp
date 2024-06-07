class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int cnt =0;
        for(int i=1;i<size;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[size-1]>nums[0]){
                cnt++;
            }
        return cnt<=1;
    }
};