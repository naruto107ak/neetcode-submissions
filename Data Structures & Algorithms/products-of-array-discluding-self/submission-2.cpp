class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int count = 0;

        for(int x : nums) {
            if(x == 0) {
                count++;
            } else {
                product *= x;
            }
        }

        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {

            if(count > 1) {
                res.push_back(0);
            }

            else if(count == 1) {
                if(nums[i] == 0)
                    res.push_back(product);
                else
                    res.push_back(0);
            }

            else {
                res.push_back(product / nums[i]);
            }
        }

        return res;
    }
};