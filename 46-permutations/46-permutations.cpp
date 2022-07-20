class Solution {
private:
	// Make them accessible everywhere in the class
    vector<vector<int> > ans;
    vector<int> nums;
    
	// Recursive function
    void helper(int i) {
        
		// Here i will be the one which control the function
		// It will check how many times the function gets call and if its is nums.size() means it prepared a permutation
        if (i == nums.size()) ans.push_back(nums);
        
		// Swap and reswap the current index i with next indeces whie calling the function itself
        for (int j = i; j < nums.size(); ++j) {
            swap(nums[i], nums[j]);
            helper(i + 1);
            swap(nums[i], nums[j]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // Set it private for class
		this->nums = nums;
        helper(0);
        return ans;
    }
};