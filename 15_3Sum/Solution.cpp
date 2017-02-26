/***
Given an array S of n integers, are there elements a, b, c in S 
such that a + b + c = 0? Find all unique triplets in the array 
which gives the sum of zero.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
***/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    	vector<vector<int> > result;
    	int target = 0;
    	if(nums.size()<3) return result;
    	sort(nums.begin(), nums.end());
    	int i = 0;
    	while(i < nums.size()){
    	    if(i > 0 && nums[i] == nums[i-1]){
    	        i+=1;
    	        continue;
    	    }
    	    int left = i + 1, right = nums.size()-1;
    	    while(left < right){
    	        if(left > i + 1 && nums[left] == nums[left-1]){
    	            left += 1;
    	            continue;
    	        }
    	        int sum = nums[i] + nums[left] + nums[right];
    	        if(sum==target){
    				vector<int> tmp;
    				tmp.push_back(nums[i]);
    				tmp.push_back(nums[left]);
    				tmp.push_back(nums[right]);
    				result.push_back(tmp);
    				left += 1;
    			}else if(sum < target){
    				left += 1;
    			}else{
    				right-=1;
    			}
    	    }
    	    i += 1;
    	}
    	return result;
    }
};