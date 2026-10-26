class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int Sum = 0;
        int count = 0;

        for (int num : nums) {
            Sum += num;

            if (mp.find(Sum - k) != mp.end()) {
                count += mp[Sum - k];
            }

            mp[Sum]++;
        }

        return count;
    }
};

