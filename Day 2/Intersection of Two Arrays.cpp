vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> freq;
        set<int> unique;
        for(int i=0;i<nums1.size();i++)
            freq[nums1[i]]++;
        for(int i=0;i<nums2.size();i++){
            if(freq[nums2[i]]>0)
                unique.insert(nums2[i]);
        }
        vector<int> v(unique.begin(), unique.end());
        return v;
    }