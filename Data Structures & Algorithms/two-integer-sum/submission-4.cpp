class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i;
        int j;
        vector<int> ans;
        for (i = 0; i < n; i++) {
            int x = target - nums[i];
            for (j = i + 1; j < n; j++) { 
                if (x == nums[j]) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};
