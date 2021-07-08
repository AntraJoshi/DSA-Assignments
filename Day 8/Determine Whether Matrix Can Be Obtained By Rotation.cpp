void rotate(vector<vector<int>>& mat){
        for(int i=0;i<mat.size();i++){
                for(int j=i;j<mat[0].size();j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
         for(int i=0;i<mat.size();i++){
              reverse(mat[i].begin(),mat[i].end());
         }
    }
    
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k=4;
        if(mat==target) return true;
        while(k--){
            rotate(mat);
            if(mat==target)
                return true;
        }
        return false;
    }