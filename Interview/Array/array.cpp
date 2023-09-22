// 283. Move Zeroes
#include<vector>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertIndex = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                nums[insertIndex] = nums[i];
                insertIndex++;
            }

        }
        for(int j=insertIndex;j<nums.size();j++){
            nums[j]=0;
        }
        
    }
};