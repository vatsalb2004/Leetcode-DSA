class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++) {

             
            if (nums[i] > 0) break;

            
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int low = i + 1;
            int high = nums.size() - 1;

            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[low], nums[high]});

                    
                    while (low < high && nums[low] == nums[low + 1]) low++;
                    
                    while (low < high && nums[high] == nums[high - 1]) high--;

                    low++;
                    high--;
                }
                else if (sum < 0) {
                    low++;
                }
                else {
                    high--;
                }
            }
        }

        return ans;
    }
};
