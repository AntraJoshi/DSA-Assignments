vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        multimap<int,int> index;
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j])
                    sum+=mat[i][j];
                else
                    break;
            }
            index.insert({sum,i});
        }
         for(auto i=index.begin();i!=index.end();i++)
        {
            if(k==0) break;
            res.push_back(i->second); 
            k--;
        }   
        return res;
    }