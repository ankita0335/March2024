class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int in, int va) {
        int n = nums.size();
        vector<int> v;
        int flag = 0;
        for (int i = 0; i < nums.size() ; i++) 
        {
            for (int j = i; j < nums.size(); j++) 
            {
                int ans = abs(i - j);
                int aa = abs(nums[i] - nums[j]);
                if (ans >= in && aa >= va) 
                {
                    v.push_back(i);
                    v.push_back(j);
                    flag = 1;
                    break;
                }
            }
        }
        return (flag == 0) ? vector<int>{-1, -1} : v;
    }
};
