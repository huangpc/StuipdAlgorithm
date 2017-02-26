class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> map;  
		vector<int> res(2, -1);
		//<number, index>
		for (int i = 0; i < numbers.size(); i++)
			map[numbers[i]] = i;
		for (int i = 0; i < numbers.size(); i++){
			int left = target - numbers[i];
			unordered_map<int, int>::iterator iter = map.find(left);
			if (iter != map.end() && iter->second != i){
				res[0] = i < iter->second ? i + 1 : iter->second + 1;
				res[1] = i > iter->second ? i + 1 : iter->second + 1;
				return res;
			}
		}
		return res;
    }
};