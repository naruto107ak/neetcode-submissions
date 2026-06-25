class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> res;

        for(int i = 0; i < nums.size(); i++) {
            res.insert(nums[i]);
        }

        int length = 0;

        for(auto it : res) {

            int prev = it - 1;

            // Start only from the beginning of a sequence
            if(res.find(prev) != res.end()) {
                continue;
            }

            int cnt = 1;
            int curr = it;

            while(res.find(curr + 1) != res.end()) {
                cnt++;
                curr++;
            }

            length = max(length, cnt);
        }

        return length;
    }
};