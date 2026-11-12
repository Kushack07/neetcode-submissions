class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> arr;

        for(auto x : mp) {
            arr.push_back({x.second, x.first});
        }

        sort(arr.rbegin(), arr.rend());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};