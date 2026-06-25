class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> hasht(2001);
        vector<int>::iterator maxi;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
          hasht[nums[i]+1000]++;
        }
        for(int j=0;j<=k-1;j++){
          maxi=max_element(hasht.begin(),hasht.end());
          int ind=distance(hasht.begin(),maxi);
          res.push_back(ind-1000);
          *maxi = -1;
        }
        return res;
    }
};