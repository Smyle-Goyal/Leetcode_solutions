class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>& ans, vector<int>& output, int index){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }

        // include
        output.push_back(nums[index]);
        solve(nums, ans, output, index+1);

        // exclude
        output.pop_back();
        solve(nums, ans, output, index+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, ans, output, 0);

        return ans;
        
    }
};