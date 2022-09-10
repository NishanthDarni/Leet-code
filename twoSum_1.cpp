class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int>::iterator itr, itr1, itr2;
        vector<int> result;
        itr = find(nums.begin(), nums.end(), target);
        for (itr = nums.begin(); itr != nums.end(); ++itr)
        {
            itr2 = itr + 1;
            itr1 = find(itr2, nums.end(), target - (*itr));
            if (itr1 != nums.end())
            {
                result.push_back(itr - nums.begin());
                result.push_back(itr1 - nums.begin());
                return result;
            }
        }
        return result;
    }
};