//nums n
//n/2>
//XOR
//sort karke iterate kar sakte hai 2 pointer nums[i]=nums[i+1]
//count rakh sakte hai kitne aa rahe and fir count++

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n/2];
    }
};
