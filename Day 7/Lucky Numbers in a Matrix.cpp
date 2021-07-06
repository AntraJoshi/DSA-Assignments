vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            int min=INT_MAX,max=INT_MIN;
            int mink=0;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<min){
                    min=matrix[i][j];
                    mink=j;
                }
            }
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][mink]>max)
                    max=matrix[j][mink];
            }
            if(min==max){
                ans.push_back(min);
            }
        }
        return ans;
    }