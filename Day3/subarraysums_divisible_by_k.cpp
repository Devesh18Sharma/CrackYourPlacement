class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        count[0] = 1;  // initial value
        int prefix = 0, result = 0;
        
        for (int num : nums) {
            // Update prefix sum here
            prefix += num;  // We add the current number to the prefix sum
            
            // Take modulo here (note: for negative values, use (prefix % k + k) % k)
            int modulo = (prefix % k + k) % k;
            
            // Update result here
            result += count[modulo];  // Add the count of previous occurrences of this modulo
            
            // Update count map here
            count[modulo]++;  // Increment the count for this modulo
        }
        
        return result;
    }
};
