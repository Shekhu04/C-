class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>umap;
        for(int i=0;i<arr.size();i++)
        {
            umap[arr[i]]++;
        }
        int count = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(umap[arr[i]] == 1)
            {
                count++;
                if(count == k)
                {
                    return arr[i];
                }
            }
        }
       return ""; 
    }
};
