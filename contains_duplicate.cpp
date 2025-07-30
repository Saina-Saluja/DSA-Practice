class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>myset;
        for(int i=0;i<nums.size();i++){
        int current_number = nums[i];
        //count hme ye btata hai ki number repeat hua ya nhi hua toh true wrna false
        if(myset.count(current_number)){
            return true;
        }
        myset.insert(current_number);
        }
        return false;
    }
};