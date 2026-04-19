// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 

        for(int i=0;i<nums.size();i++){
            int temp=0;


            temp+=nums[i];

            for(int j=i+1;j<nums.size();j++){
                temp+=nums[j];
                if(temp==target){
                    result.push_back(i);
                    result.push_back(j);
                    return result; 

                }else{
                    temp=nums[i];
                }

            }

        }
        return result; 
    }
};