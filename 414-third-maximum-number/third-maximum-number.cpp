class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int cnt = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                cnt++;
            }
            if(cnt == 2){
                return nums[i];
            }
        }
        return nums[0];
    }
};
//3 2 2 1