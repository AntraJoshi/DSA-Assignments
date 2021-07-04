 vector<int> shuffle(vector<int>& nums, int n) {
        int i=0,j=n;
        vector<int> arr;
        while(i<n){
            arr.push_back(nums[i]);
            arr.push_back(nums[j]);
            i++;
            j++; 
        }
        return arr;
    }