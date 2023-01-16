class Solution {
public:
vector<int> findDuplicates(vector<int>& nums) {
unordered_set<int> intSet;
vector<int> duplicate;
for (int i = 0; i < nums.size(); i++)
{
if (intSet.find(nums[i]) == intSet.end())
intSet.insert(nums[i]);
else
duplicate.push_back(nums[i]);
}
return duplicate;
}
};
