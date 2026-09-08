class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int cum=target-nums[i];
            if(mp.find(cum)!=mp.end()){
            return {mp[cum],i};
            }
            mp[nums[i]]=i;
        }
        
        return{};
    }
};
