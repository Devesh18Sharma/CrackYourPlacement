class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 4) return result;  // If there are less than 4 numbers, return empty result
        
        sort(nums.begin(), nums.end());  // Sort the array
        
        for (int a = 0; a < n - 3; a++) {
            // Skip duplicates for the first number
            if (a > 0 && nums[a] == nums[a-1]) continue;
            
            for (int b = a + 1; b < n - 2; b++) {
                // Skip duplicates for the second number
                if (b > a + 1 && nums[b] == nums[b-1]) continue;
                
                int c = b + 1;  // Left pointer
                int d = n - 1;  // Right pointer
                
                while (c < d) {
                    long long sum = (long long)nums[a] + nums[b] + nums[c] + nums[d];
                    
                    if (sum == target) {
                        result.push_back({nums[a], nums[b], nums[c], nums[d]});
                        
                        // Skip duplicates for the third number
                        while (c < d && nums[c] == nums[c+1]) c++;
                        // Skip duplicates for the fourth number
                        while (c < d && nums[d] == nums[d-1]) d--;
                        
                        c++;
                        d--;
                    } else if (sum < target) {
                        c++;  // If sum is less than target, increment left pointer
                    } else {
                        d--;  // If sum is greater than target, decrement right pointer
                    }
                }
            }
        }
        
        return result;
    }
};
