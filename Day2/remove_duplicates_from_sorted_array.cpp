/*sorted
duplicate hatao unique number lao in same order
unique k
return k
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int k = 1; // k is both the count of unique elements and the index where we'll place the next unique element
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};
