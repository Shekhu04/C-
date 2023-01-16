class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>umap;
        int k=0;
        for(int i=0;i<nums.size();i++)
        umap[nums[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            int key=nums[i];
            auto temp=umap.find(key);
            int val=temp->second;
            if(val<=1)
             k=k+nums[i];
        }
        return k;
        
    }
};
