class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int high=numbers.size()-1;
        while(left<high){
            if(numbers[left]+numbers[high]==target)
            {
                return {left+1,high+1};
            }
            else if(numbers[left]+numbers[high]<target)
            {
                left++;
            }
            else
            {
                high--;
            }
        }
        return {};
    }
};
