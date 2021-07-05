int heightChecker(vector<int>& heights) {
        vector<int> h(heights.begin(),heights.end());
        sort(h.begin(),h.end());
        int c=0;
        for(int i=0;i<h.size();i++){
            if(heights[i]!=h[i])
                c++;
            
        }
        return c;
    }