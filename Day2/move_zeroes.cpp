class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex=0;

        //move all non zero to front

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[nonZeroIndex]=nums[i];
                nonZeroIndex++;
            }
        }

        // Fill the rest with zeros
        for(int i=nonZeroIndex;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
