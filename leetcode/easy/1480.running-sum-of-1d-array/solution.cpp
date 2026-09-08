// Created by coringcoring at 2026/09/08 17:35
// leetgo: 1.4.18
// https://leetcode.com/problems/running-sum-of-1d-array/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1 ; i< nums.size() ; i++){
			//nums.size() 괄호 붙여야함. 문법 까먹음 이슈. 
			nums[i]+=nums[i-1];
		}

		return nums; 
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	try {
		vector<int> nums = LeetCodeIO::deserialize<vector<int>>(cin);

		Solution obj;
		auto res = obj.runningSum(nums);

		stringstream out_stream;
		LeetCodeIO::print(out_stream, res);
		cout << "\noutput: " << out_stream.rdbuf() << '\n';
	} catch (const LeetCodeIO::Error &error) {
		cerr << "LC_IO: " << error.what() << '\n';
		return 2;
	}
	return 0;
}
